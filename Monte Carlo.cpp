// Monte Carlo Pricer of a call option

#include <boost/math/distributions.hpp>	// for use with normal distribution
#include <boost/random.hpp>		// To be use with random generator
#include <iostream>
#include <cmath>
#include <fstream>				// allows us to use file streams
#include <iomanip>				// stream manipulations
using namespace std;
using namespace boost::math;

void printvector(vector<double>& vu)
{
	vector<double>::iterator it;

	for(it=vu.begin(); it!=vu.end(); it++)
	{
		cout << (*it) << endl;
	}
}

void writetofile(vector<double>& vu)
{
	vector<double>::iterator it;
	
	ofstream qFile;	// Output to file Stream
	qFile.open("output.txt",ios::out);
	
	qFile << fixed << setprecision(2) << setw(5) << "Prices" << endl;
		
	for(it=vu.begin(); it!=vu.end(); it++)
	{
		qFile<< fixed << setprecision(2) << setw(5) << (*it) << endl;
	}
	
	qFile.close();
}

void SD(vector<double>& tu, double r, double T)
{
	vector<double>::iterator it=tu.begin();
	double count=tu.size();

	double sum(0), sum2(0), average(0), stdev(0), ster(0);

	for(it=tu.begin(); it!=tu.end(); it++)
	{
		sum+=(*it);
		sum2+=pow((*it),2);
	}

	average=sum/count;
	stdev=sqrt(sum2-(pow(sum,2)/count))*exp(-2*r*T)/(count-1.0);
	ster=stdev/sqrt(count);

	std::cout << fixed << setprecision(6) << "and Standard Deviation: "<< stdev << endl;
	std::cout << fixed << setprecision(6) << "and Standard error: "<< ster << endl;
}

double BS(double S, double K, double T, double r, double sig, int type)
{
	// Initialize normal distribution as a standard normal
	// You need a standard normal because Geometric Brownian Motion is based on
	// a standard normal distribution
	normal_distribution<> stNormal(0.0, 1.0);
		
	double tmp=sig*sqrt(T);
	double d1=((log(S/K)+(r+(sig*sig)*0.5)*T)/tmp);		//d1
	double d2=d1-tmp;									//d2
	// cdf=cumulative standard normal distribution function
	if(type==1)
	{
		double C=S*cdf(stNormal,d1)-K*exp(-r*T)*cdf(stNormal,d2);	//call price
		return(C);
	}
	else
	{
		return(K*exp(-r*T)*cdf(stNormal,-d2)-S*cdf(stNormal,-d1)); // put price
	}
}

double payoff(double X, double K, int type)
{
	if(type==1)
	{
		// for call option
		return(max((X-K),0.0));
	}
	else
	{
		// for put option
		return(max((K-X),0.0));
	}
}

void MC(double S0, double K, double T, double r, double sig, long paths, long interval, int type)
{
	// Define dt
	double dt=T/interval;
	
	// Define Values of Stock price, Sum, Average, Price, zero $ Stocks  
	double S(0),SOld(0),Sum(0),Aveg(0),price(0),coun(0);
	vector<double> vec; 

	// Random Generator lagged fibonacci
	boost::lagged_fibonacci607 rng;
	// Seed for random generator (x(0))
	rng.seed(static_cast<unsigned int> (time(0)));
	// Initialize normal distribution as a standard normal
	boost::normal_distribution<> st(0.0, 1.0);
	
	std::cout << "The Monte Carlo simulation will start now" << endl;

	// Calculate of different paths 
	for (long i = 1; i <= paths; ++i)
	{ 
		// Give status after each 1000th iteration
		if ((i/10000) * 10000 == i)
		{
			std::cout << i << " paths were simulated until now" << endl;
		}
		
		// Initialize values
		S=0;
		SOld=S0;
		
		// Run Simulation for 1 path
		for (long index=1; index <= interval; ++index)
		{
			// Create a random number using a standard normal for distribution
			boost::variate_generator<boost::lagged_fibonacci607&, boost::normal_distribution<> > gen(rng,st);
			//(when multiplied gy a sqrt(T) this is called the Wiener process)
			// this is the random parameter dW
			
			// Geometric Brownian Motion SDE
			S = SOld + SOld*r*dt + SOld*sig*gen()*sqrt(dt);		// Simple Brownian motion SDE
			//S = SOld*exp((r-0.5*sig*sig)*dt+sig*gen()*sqrt(dt));	
						
			// Change to previous values
			SOld=S;

			// check if there are any spurious values (values <0)
			if (S <= 0.0)
			{
				coun++;
			}
		}
		vec.push_back(payoff(S,K,type));
		// Sum all payoff
		Sum+=payoff(S,K,type);
	}
	// Average all payoffs
	Aveg=Sum/paths;
	// Discount the payoff
	price=exp(-r*T)*Aveg;
	
	std::cout << "The price of the Call using Monte Carlo is: " << price << endl; 
	
	// Statistics of the simulation
	SD(vec, r, T);
}

int main()
{
	double S0=100;
	double K=100;
	double T=1;
	double r=0.05;
	double sig=0.2;
	long interval=500;		// number of stock price simulations per path
	long paths=200000;		// numbers of paths run 
	int type(1);			// type of option call(1), put(2)
	//int conv(1);			// Converging function
	
	MC(S0,K,T,r,sig,paths,interval,type);
	std::cout << "The value of the closed form solution is: " << BS(S0,K,T,r,sig,type) << endl;

	return(0);
}
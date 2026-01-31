#include <iostream>
#include <string>

using namespace std;


string str_reverse(string s){
  int iStringLength = s.length();
  string sTemp;
  
  for ( int i = iStringLength-1; i>=0; i-- ){
    sTemp += s[i];
  }
  
  return sTemp;
}

class BigNum {
  string sBigNum;
  int iSize;

public:

  BigNum(){
    sBigNum="0";
    iSize=1;
  }
  
  BigNum(string s){
    sBigNum=s;
    iSize=sBigNum.length();
  }

  friend BigNum operator+(BigNum bi1, BigNum bi2)
  {
    string sAdd;

    int nsize1=bi1.iSize;
    int nsize2=bi2.iSize;
    int maxsize=max(nsize1, nsize2);
    int BigInt1[maxsize], BigInt2[maxsize];

    for ( int i = 0; i<= maxsize-1; i++ ){
      BigInt1[i]=0;
      BigInt2[i]=0;
    }
    
    for ( int i = 0; i<= nsize1-1; i++ ) {
      BigInt1[nsize1-1-i]=static_cast<int>(bi1.sBigNum[i])-48;
    }
    
    for ( int i = 0; i<= nsize2-1; i++ ) {
      BigInt2[nsize2-1-i] = static_cast<int>(bi2.sBigNum[i])-48;
    }

    int icarry=0;
    for ( int i = 0; i<=maxsize-1; i++ ){
      int iAdd = BigInt1[i]+BigInt2[i]+icarry;
      if ( iAdd >= 10 ){
	icarry = 1;
	iAdd = iAdd-10;
      }
      else{
	icarry=0;
      }	
      sAdd += static_cast<char>(iAdd)+48;
    }
    if ( icarry = 1 ){
      sAdd = sAdd+"1";
    }
    
    sAdd=str_reverse(sAdd);

    BigNum bTemp(sAdd);

    return bTemp;
  }
  
  void print()
  {
    cout<<sBigNum<<endl;
  }

};

int main(){
  string s1, s2;
  cin>>s1;
  cin>>s2;

  BigNum Ibig1(s1);
  BigNum Ibig2(s2);
  BigNum IbigTem("0");

  IbigTem=Ibig1+Ibig2;
  IbigTem.print();

  return 0;
}

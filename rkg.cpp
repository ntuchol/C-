//DD
#include <string>
#include <deque>
#include <iostream>

std::string fn(std::string s) 
{ // What does this long function do?

	std::string temp("");
	std::deque<std::string> temp1;

	auto len = s.size();
	auto j = s.end();
	j--;
	int k = 0;
	for (auto i = j; i != s.begin(); i--) 
	{
		k++;
		std::string ss(1, *i);
		temp1.push_front(ss);
		if (k % 3 == 0) { temp1.push_front(","); }
	}
	k++;
	if (k % 3 == 0) 
	{
		temp1.push_front(",");
	}
	std::string ss(1, *s.begin());
	temp1.push_front(ss);
	for (auto j = temp1.begin(); j != temp1.end(); ++j) 
	{
		temp.append(*j);
	}
	return temp;
}

int main() 
{
// CRASH	std::cout << fn("") << '\n';
//	std::cout << fn(" ") << '\n';
	std::cout << fn(" \n \t ") << '\n';
	std::cout << fn("1") << '\n';
	std::cout << fn("10") << '\n';
	std::cout << fn("01") << '\n';
	std::cout << fn("1000") << '\n';
	std::cout << fn("10000") << '\n';
	std::cout << fn("100000") << '\n';
	std::cout << fn("1000000") << '\n';
	std::cout << fn("   10000000  ") << '\n';
	std::cout << fn("00040000") << '\n';
	std::cout << fn("1234567890") << '\n';

	return 0;
}
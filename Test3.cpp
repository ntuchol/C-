#include <iostream>

// djd, 2016-4-20

int multiply(int x)
{

	return 2 * x;
}

int main()

{

	// Some variations (Daniel)

	// This example is really function composition
	
	// Kind of difficult to read
	int timestwoplusthree = [](int x) { return [](int y) { return y * 2; }(x)+3; }(5);

	auto fInner = [](int x) {return x * 2; };
	auto fOuter = [&fInner](int x) {return fInner(x) + 3; };
	auto fTranslate = [](int x) {return x + 3; };
	auto fOuter2 = [](int x) {return multiply(x) + 3; };
	
	// Print the result.
	std::cout << timestwoplusthree << std::endl;
	std::cout << fOuter(5) << std::endl;
	std::cout << fOuter2(5) << std::endl;

	// Using function composition, cool
	std::cout << fTranslate(fInner(5)) << std::endl;
	std::cout << fInner(fTranslate(fInner(5))) << std::endl; // 26!
	// etc.
}
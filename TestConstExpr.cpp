// TestConstExpr.cpp
//
// Testing noexcept and constexpr (since C++11).
//
// (C) Datasim Education BV 2015
//

#include <iostream>
#include <cmath>

class Point
{
private:
	double x, y;

public:
	constexpr Point() noexcept : x(0.0), y(0.0) {}
	constexpr Point(double xVal, double yVal) noexcept : x(xVal), y(yVal) {}
	constexpr Point(const Point& pt2) noexcept : x(pt2.x), y(pt2.x) {}

	constexpr double X() const noexcept { return x; }
	constexpr double Y() const noexcept { return y; }

	void X(double xNew) noexcept { x = xNew; }
	void Y(double yNew) noexcept { y = yNew; }

	/*constexpr*/ double Distance(const Point& pt2) const
	{
		return std::sqrt((x - pt2.x)*(x - pt2.x) + (y - pt2.y)*(y - pt2.y));
	}

	void print() const
	{

		std::cout << "(" << x << "," << y << ")\n";
	}
};

constexpr Point MidPoint(const Point& p1, const Point& p2)
{
	return{ (p1.X() + p2.X()) / 2, (p1.Y() + p2.Y()) / 2 };
}

int main()
{
	double x = 1.0; double y = 1.0;

	Point pt(x, y); Point pt2(pt); Point pt3(pt.X() + 1.0, pt.Y() + 1.0);

	auto midPoint = MidPoint(pt, pt3);

	auto d = pt.Distance(pt3);

	midPoint.print();
	std::cout << d << "\n";

	return 0;
}
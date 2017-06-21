#include <bits/stdc++.h>

using namespace std;

class Shape
{

protected: // protected

int x,y;

public:

virtual int getArea() = 0;

void setXY(int a, int b)
{
	x = a;
	y = b;
}

};

class Rectangle : public Shape
{

private:

public:
int getArea()
{
	return x*y;
}

};

class Triangle : public Shape
{

private:

public:

int getArea()
{
	return 0.5*x*y;
}

};

int main()
{
Triangle t;
Rectangle r;

t.setXY(5,5);
r.setXY(5,5);

cout << "Triangle area :" << t.getArea() << endl;
cout << "Rectangle area : " << r.getArea() << endl;

return 0;
}

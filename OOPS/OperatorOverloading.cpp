#include <bits/stdc++.h>

using namespace std;

class Sample
{
private :

int x,y;

public :

void setXY(int a, int b)
{
	x = a;
	y = b;
}

void show()
{
	cout << x << " " << y <<endl;
}

/* add two objects */
Sample operator + (const Sample &s)
{

Sample obj;

obj.x = this->x + s.x;
obj.y = this->y + s.y;

return obj;
}

};

int main()
{

Sample s1, s2;
s1.setXY(2,2);
s2.setXY(3,3);

Sample s3 = s1+s2;
s3.show();

return 0;
}

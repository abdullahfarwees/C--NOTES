#include<bits/stdc++.h>

using namespace std;

int square(int sq)
{
	return sq*sq;
}

int cube(int cb)
{
	return cb*cb*cb;
}

int main()
{

int ch;
int x = 5;

cout << "Enter 0 - square , 1 - cube : " << endl; 
cin >> ch;

int (*ptr)(int);

if( ch == 0 )
{
	ptr = square;
}
else if(ch == 1)
{
	ptr = cube;
}

cout << ptr(x) << endl;

return 0;
}

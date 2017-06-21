#include<bits/stdc++.h>

using namespace std;

class Value
{

private :

protected :
int x;

public :

void setX(int val)
{
	x = val;
}


};

class SqValue : public Value
{

private :


public :

void show()
{
	cout << "--- > " << x*x << endl;
}

};


int main()
{

SqValue s;
s.setX(5);
s.show();

return 0;
}

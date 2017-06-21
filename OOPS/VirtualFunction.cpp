#include<bits/stdc++.h>

using namespace std;

class SuperClass
{

private:

public:

virtual void area()
{
	cout << "SuperClass area function" << endl;
}

};

class SubClass:public SuperClass
{

private :

public :

virtual void area()
{
	cout << "SubClass area function " << endl;
}

};

int main()
{

SuperClass *SCptr;
SubClass objSubClass;

SCptr = &objSubClass;
SCptr -> area();



return 0;
}

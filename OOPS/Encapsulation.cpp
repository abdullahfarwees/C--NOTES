#include<bits/stdc++.h>

using namespace std;

class Sample
{

private:

int var;

public:

int addition(int a,int b)
{
	var = a+b;
}

void show()
{
	cout << var << endl;
}


};

int main()
{

Sample s;

s.addition(4,6);
s.show();

return 0;
}

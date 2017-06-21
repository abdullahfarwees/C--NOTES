#include<bits/stdc++.h>

using namespace std;

class Sample
{
private:

int varA, varB;

public:

void setValues(int a,int b)
{
	varA = a;
	varB = b;
}

void show()
{
	cout << varA << "  "<< varB << endl;
}

};

int main()
{

Sample One , Two;

One.setValues(2,3);

/* copy values from object One to Two */
Two = One;

Two.show();

return 0;
}

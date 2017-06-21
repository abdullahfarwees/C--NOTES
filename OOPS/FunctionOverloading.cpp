#include<bits/stdc++.h>

using namespace std;

class Sample
{
private:

public:

/* function with no parameters */
void show()
{
	cout << "show I/O" << endl;
}

/* function with integer parameters */
void show(int i)
{
	cout << i << endl;
}

/* function with float parameters */
void show(double f)
{
	cout << f << endl;
}

/* function with character parameters */
void show(char *c)
{
	cout << c << endl;
}

};

int main()
{
Sample s;

s.show();
s.show(123);
s.show(333.33);
s.show("zaza");

return 0;
}

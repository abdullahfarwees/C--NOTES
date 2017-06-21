#include <bits/stdc++.h>

/*

object creation example

*/


using namespace std;

class Cube
{
private :

int val,r ;

public :

int CubeVal(int val);
void show();

};

int Cube::CubeVal(int val)
{
	r = val * val * val;
return r;
}

void Cube::show()
{
	cout << r << endl;
}

int main()
{
Cube c;

c.CubeVal(2);
c.show();

return 0;
}

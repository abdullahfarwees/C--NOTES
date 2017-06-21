#include<bits/stdc++.h>

using namespace std;

int main()
{
set<int> s;

for(int i=0;i<10;i++)
	s.insert(i);

int x;
cin >> x;

bool status = s.find(x) != s.end();
if(status)
	cout << "present";
else
	cout << "Not present";	
cout<<endl;

s.insert(x);

status = s.find(x) != s.end();
if(status)
	cout << "present";
else
	cout << "Not present";	
cout<<endl;

while( !s.empty() )
{
	cout << *s.begin() << endl;
	s.erase( s.begin() );
}

return 0;
}

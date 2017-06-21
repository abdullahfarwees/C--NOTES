#include <bits/stdc++.h>

using namespace std;

int main()
{
vector<int> vi;

for(int i=0;i<4;i++)
	vi.push_back(i);
	

vector<int>::iterator it;	
for(it = vi.begin(); it != vi.end() ; it++)
	cout << " " << *it ;
	
cout << endl << endl;
vi.pop_back();
		
for(it = vi.begin(); it != vi.end() ; it++)
	cout << " " << *it ;

cout << endl;	
cout << " front --> " << vi.front() << "\n\n back -->" << vi.back() << endl;	

return 0;
}

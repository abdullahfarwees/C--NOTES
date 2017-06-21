#include<bits/stdc++.h>

using namespace std;

int main()
{
queue<char> q;
	
for(int i=0;i<10; i++)
	q.push('a'+i);

while(!q.empty())
{
	cout << q.front() << " " ;
	q.pop();	
}		

		
return 0;
}

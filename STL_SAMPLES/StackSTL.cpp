#include<bits/stdc++.h>

using namespace std;

int main()
{
stack<char> stk;

for(int i=0;i<10;i++)
	stk.push('a'+i);	

for(int i=0;i<10;i++)
{
	cout << stk.top() << endl;
	stk.pop();
}		
	
return 0;
}

/*


#include<bits/stdc++.h>

using namespace std;

int main()
{
stack<string> stk;

string str[] = {"chennai","karaikudi","peerkalaikadu","madurai","trichy" };

for(int i=0; i<5 ;i++)
	stk.push(str[i]);	

for(int i=0;i<10;i++)
{
	cout << stk.top() << endl;
	stk.pop();
}		
	
return 0;
}

*/

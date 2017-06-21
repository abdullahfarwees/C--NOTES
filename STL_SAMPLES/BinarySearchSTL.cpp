#include<bits/stdc++.h>

using namespace std;

int main()
{
int arr[] = {1,2,3,4,5,6,7,8,9,10};
vector<int> v(arr,arr+10);

if(std::binary_search(v.begin(), v.end(), 5)){
	cout << "present \n";
}

return 0;
}

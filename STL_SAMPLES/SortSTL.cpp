#include<bits/stdc++.h>

using namespace std;

int main()
{
	int arr[] = {3,2,1,6,5,4,9,8,7,6};

	for(int i=0;i<10; i++)cout<<arr[i] << " " ;

	cout << endl;
	sort(arr,arr+10);

	for(int i=0;i<10;i++)cout<< arr[i] << " "; 

return 0;
}

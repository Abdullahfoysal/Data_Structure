#include<bits/stdc++.h>

using namespace std;
bool linearSearch(int arr[],int n,int value){
	for(int i=0;i<n;i++)
	if(value==arr[i])return true;
	return false;
}

int main(int argc, char const *argv[])
{
	int n;
	 cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	int value;
	cin>>value;

	bool result=linearSearch(arr,n,value);
	if(result)cout<<"found on linearSearch: "<<value<<endl;
	else cout<<"not found on linearSearch: "<<value<<endl;

	return 0;
}
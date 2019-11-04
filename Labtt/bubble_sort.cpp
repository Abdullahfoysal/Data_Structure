#include <bits/stdc++.h>

using namespace std;
void bubbleSort(int arr[],int size){
	
	for(int i=0;i<size;i++)
	{
		for(int j=0;j+1<size-i;j++)
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
	}
}

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)cin>>arr[i];

	bubbleSort(arr,n);

    for(auto i:arr)cout<<i<<" ";
	
	return 0;
}
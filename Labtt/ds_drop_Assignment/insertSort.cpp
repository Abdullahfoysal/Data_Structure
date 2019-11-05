#include<bits/stdc++.h>

using namespace std;
#define mx 1000
int n;
int arr[mx];
void insertSort(){
	
	for(int i=1;i<n;i++){
		int j=i-1;
		int temp=arr[i];
		for( ;j>=0 && arr[j]>temp;){
			
				arr[j+1]=arr[j];
				j--;
			
			
		}
		arr[j+1]=temp;
	}
}

int main(int argc, char const *argv[])
{
	
	cin>>n;
	
	for(int i=0;i<n;i++)cin>>arr[i];

	insertSort(n);

	for(int i=0;i<n;i++)cout<<arr[i]<<" ";

	return 0;
}
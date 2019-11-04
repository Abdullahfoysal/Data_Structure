#include<bits/stdc++.h>

using namespace std;
#define mx 1000
int n;
int arr[mx];
void selectionSort(){

	
	for(int i=0;i<n;i++){
		int index=i;
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[index]){
				index=j;
			}
		}
		
		swap(arr[i],arr[index]);
	}
}


int main(int argc, char const *argv[])
{
	
	cin>>n;
	
	for(int i=0;i<n;i++)cin>>arr[i];

	selectionSort();

	for(int i=0;i<n;i++)cout<<arr[i]<<" ";

	return 0;
}
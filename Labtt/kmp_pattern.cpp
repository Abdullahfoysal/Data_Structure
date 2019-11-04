#include<bits/stdc++.h>

using namespace std;

int main()
{
	string text="abcabcabc";
	string pat="abcabc";
	int n,m;
	cin>>n>>m;
	cin>>text>>pat;
	int a;
	
	int arr[pat.size()];
	arr[0]=0;

	for(int i=1,j=0;i<pat.size();)
	{
		if(pat[j]==pat[i])
		{
			arr[i]=j+1;
			j++;
			i++;
		}
		else
		{
		//while needed

			if(j!=0 )//&& pat[j]!=pat[i]
			{
				j=arr[j-1];
			}
			else 
			{

				arr[i]=0;
				i++;
			}

			
		}
	}
	// for(auto x:arr)cout<<x<<" ";
    int j=0,d=0;
//kmp search
	for (int i = 0; i < text.size();)
	{
		if(text[i]==pat[j])
		{
			j++;
			i++;
			// cout<<j<<endl;
		}

		if(j==pat.size())
		{
			cout<<"found on index "<<i-j<<endl;
			j=arr[j-1];
		}
		else if(i<text.size() && pat[j]!=text[i])
		{
			if(j!=0)
			{
				j=arr[j-1];
			}
			else i++;
		}



	}
	cout<<d<<endl;

	return 0;
}
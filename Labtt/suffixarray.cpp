#include <bits/stdc++.h>
using namespace std;
std::vector<string> v;
int binary(int l, int r, string ss)
{
	int mid = (l + r) / 2;
	if (l <= r)
	{
		if (v[mid].find(ss)==0)
		{
			return 1;

		}
		if (v[mid] < ss)
		{
			return binary(l, mid - 1, ss);
		}
		else  return binary(mid + 1, r, ss);

	}
	return 0;
}

int to_lower(int l,int r,string ss)
{
	int mid=(l+r)/2;
	if(l<=r)
	{
		if(v[mid].find(ss)==0)
		{
			if(mid-1>=0)
			{
				if(v[mid-1].find(ss)==0)
				{
					return to_lower(l,mid-1,ss);

				}
				else return mid;
			}
			else return mid;
		}
		if(v[mid]<ss)
		{
			return to_lower(l,mid-1,ss);
		}
		else return to_lower(mid+1,r,ss);
	}
}

int to_high(int l,int r,string ss)
{
	int mid=(l+r)/2;
	if(l<=r)
	{
		if(v[mid].find(ss)==0)
		{
			if(mid+1<=r)
			{
				if(v[mid+1].find(ss)==0)
				{
					return to_high(mid+1,r,ss);
				}
				else return mid;
			}
			else return mid;
		}
		if(v[mid]<ss)
		{
			return to_high(l,mid-1,ss);
		}
		else return to_high(mid+1,r,ss);
	}
}

int main(int argc, char const *argv[])
{
	string s, ss;
	cin >> s >> ss;

	for (int i = 0; i < s.size(); i++)
	{
		v.push_back(s.substr(i, s.size() - i));
	}
	sort(v.begin(), v.end());
	for(auto x:v)cout<<x<<endl;
	cout << to_high(0, ss.size() - 1,"aab");

	return 0;
}
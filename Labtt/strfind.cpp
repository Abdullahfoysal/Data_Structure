#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
#include <iomanip>

using namespace std;

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;


int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string s,ss;
	int t;
	cin>>t;
	for(int I=1;I<=t;I++)
	{
		cin>>s>>ss;
		int  tt=0;
		int c=0;
		tt=s.find(ss);
		while(tt!=-1)
		{
			tt=s.find(ss,tt+1);
			c++;
		}
		cout<<"Case "<<I<<": "<<c<<endl;
	}
	return 0;
}
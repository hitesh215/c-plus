//Problem Link: https://codeforces.com/contest/1560/problem/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
int main(){
	fast;
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		vector<int>v;int ans=INT_MAX;
		while(n>0)
		{
			int x=n%10;
			n=n/10;
			v.push_back(x);
		}
		reverse(v.begin(),v.end());
		for(int i=0;i<63;i++)
		{
			ll x=(ll)(pow(2,i)+0.5);ll o2=x;
			
			//cout<<x<<" "<<i<<endl;
			vector<int>v1;
			while(x>0)
		{
			int x1=x%10;
			x=x/10;
			v1.push_back(x1);
		}
		reverse(v1.begin(),v1.end());
	    
    
        	int p=0;
        	for(int i=0;i<v.size();i++)
        	{
        		if(p<v1.size() && v[i]==v1[p])
        		{
        			p++;
				}
			}
		int l=v.size()-p;int l1=v1.size()-p;
		ans=min(ans,l+l1);
		}
		cout<<ans<<"\n";
	}
}

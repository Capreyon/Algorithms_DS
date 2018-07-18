#include<bits/stdc++.h>
using namespace std;
int max_row(int coins)
{
	int n=coins,r=0;
	while((r*(r+1))/2<=n)
	{
       r++;
	}
	return r-1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int r=max_row(n);
		cout<<r;
	}
}
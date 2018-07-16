#include<bits/stdc++.h>
using namespace std;
int live_position(int n,int k)
{
	if(n==0 || n==1)
		return n;
	else
		return (live_position(n-1,k)+k-1)%n+1;
}
int main()
{
	int n,k;
	cin>>n>>k;
	int ans=live_position(n,k);
	cout<<ans;
}
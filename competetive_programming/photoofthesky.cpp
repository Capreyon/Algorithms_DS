


#include<bits/stdc++.h>
using namespace std;
int main()
{

	long long int n;
	cin>>n;
	vector<long long int> v(2*n+2);
	for(long long int i=0;i<2*n;i++)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
    long long int ans;
	long long int min1;
	min1=((v[n-1]-v[0])*(v[2*n-1]-v[n]));
	for(long long int i=1;i<n;i++)
	{
		ans=(min(((v[n-1+i]-v[i])*(v[2*n-1]-v[0])),min1));

	}
	cout<<ans;


}
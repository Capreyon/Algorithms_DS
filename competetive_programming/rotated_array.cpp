#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector <int> a(n+2);
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		int count=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]==k)
			{
				count++;
				cout<<i;
			}
		}
		if(count==0)
			cout<<"-1";


	}
}
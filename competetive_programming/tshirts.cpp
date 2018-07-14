#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	map <string, int> m;
	string s;
	for(int i=0; i<n; i++)
	{
		cin>>s;
		m[s]++;
	}
	int count=0;
	for(int i=0; i<n; i++)
	{
		cin>>s;
		if(m[s]==0)
		{
		    	count++;
		}
		else
		m[s]--;
		

	}
	cout<<count;

}
#include<bits/stdc++.h>
using namespace std;

int count(int v[], int n, int k)
{
	if(k==0)
		return 1; // don't want any money
	if(k<0)
		return 0; // not possible
	if(k>=0 && n<=0)
		return 0;  // no coins
	return (count(v, n-1, k)+count(v, n, k-v[n-1]));

}

int main()
{
	int n,k; //size of array and value of coin
	cin>>n>>k;
	int v[n];
	for(int i=0;i<n;i++)
	{
		cin>>v[i];
    }
    int t=count(v,n,k);
    cout<<t;
}
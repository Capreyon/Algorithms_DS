#include<bits/stdc++.h>
using namespace std;
int min_memory_size(vector<int> a)
{
	int sum=0;
	int n=a.size();
	for(int i=0;i<n;i++)
		sum=sum+a[i];
	int size=1;
	while(size<sum)
	{
		size=2*size;
	}
	return size;
}

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	int ans=min_memory_size(a);
	cout<<ans;
}
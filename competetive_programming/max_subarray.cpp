#include<bits/stdc++.h>
using namespace std;
int fun(int a[],int n,int k)
{
   int start=0,end=0,res=0,result=0,p=1;
   for(end=0;end<n;end++)
   {
      p=p*a[end];
      while(start<end && p>k)
      	p=p/a[start++];
      if(p<=k)
      {
      	 res=1+(end-start);
      	 result=result+res;
      	 cout<<result<<" ";
      }
   }
   return result;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		cout<<fun(a,n,k)<<endl;
	}
}
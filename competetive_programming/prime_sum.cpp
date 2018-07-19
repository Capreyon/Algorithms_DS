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
		int a[n/3 +2];
	    a[0]=3;
	    cout<<a[0];
		for(int i=1,k=1;k<=n/6; k++,i=i+2)
		{
			a[i]=6*k -1;
			a[i+1]=6*k +1;
			cout<<" "<<a[i]<<" "<<a[i+1]<<" ";
		}
		cout<<"\n";
		int b[n/3 +2];
		b[0]=3;
		for(int j=0;j<n/3;j++)
		{
            for(int p=j+1;p<n/3;p++)
            {
            	if(a[p]%b[j]==0)
            		continue;
            	else
            		b[p]=a[j+1];

            }
           
		 }
		 for(int l=0;l<n/3;l++)
		 {
		 	cout<<b[l]<<" ";
		 }
		 cout<<"\n";
	}
}
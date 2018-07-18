#include<bits/stdc++.h>
using namespace std;
int nextGreaterNumber(int l)
{
	int result=0;
	vector<int> a;
	while(l>0)
	{
		a.insert(a.begin(),l%10);
		l=l/10;
	}
	int length=a.size();
	int flag=0,i=0;
	for(i=length-1;i>0;i--)
	{
		if(a[i]>a[i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	return -999;
    else
    {
    	int smallest=a[i];
    	int j,p=i;
    	for(j=i+1;j<length;j++)
    	{
           if(a[j]>a[i-1] && a[j]<=smallest )
           	smallest = a[j];
           p=j;
    	}
    	for(int t=0;t<length;t++)
    		cout<<a[t]<<" ";
    	cout<<"\n";
    	swap(a[i-1],a[p]);
    	for(int t=0;t<length;t++)
    		cout<<a[t]<<" ";
    	cout<<"\n";
    	sort(a.begin()+i, a.end());
    	for(int t=0;t<length;t++)
    		cout<<a[t]<<" ";
    	cout<<"\n";
    	for(int k=0;k<length;k++)
    	{
    		result=result*10+a[k];

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
		int l;
		cin>>l;
		int ans=nextGreaterNumber(l);
		cout<<ans;
		
		
	}
}



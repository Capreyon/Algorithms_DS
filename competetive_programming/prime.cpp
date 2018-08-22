#include<bits/stdc++.h>
using namespace std;
int sums(int n)
{
    int t=n;
    int count[n+2]={0};
    while (n%2 == 0)
    {
       count[2]++;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            count[i]++;
            n = n/i;
        }
    }
    if (n > 2)
        count[n]++;
    int sum=0;

    for(int i=2;i<=t;i++)
    {
        if(count[i]>=1)
            sum=sum+i;
    }
    return sum;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n+2];
		for(int i=0;i<n;i++)
			cin>>a[i];
		int counter=0;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(j!=i)
				{
					if((a[j]%a[i])==0 && (sums(a[j])%sums(a[i]))==0 ){
						counter++;
					}
				}
			}
		}
		cout<<counter<<"\n";


	}
}
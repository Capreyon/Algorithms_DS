#include<bits/stdc++.h>
using namespace std;
#define t 1000000007;
int gcd(int a, int b)
{
    if (a == 0 || b == 0)
       return 0;
 
    if (a == b)
        return a;
 
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+2][m+2];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            for(int k=i+1;k<n;k++)
            {
                for(int l=0;l<m;l++)
                {
                    sum=sum+gcd(a[i][j],a[k][l]);
                }
            }
        }
    }
    int ans=sum%t;
    cout<<ans;
    
    
    
}
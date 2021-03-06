#include<bits/stdc++.h>
using namespace std;
int primeFactorsum(int n)
{
    // Print the number of 2s that divide n
    int t=n;
    int count[n+2]={0};
    while (n%2 == 0)
    {
       count[2]++;
        n = n/2;
    }
 
    // n must be odd at this point.  So we can skip 
    // one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        while (n%i == 0)
        {
            count[i]++;
            n = n/i;
        }
    }
 
    // This condition is to handle the case when n 
    // is a prime number greater than 2
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
    int n;
    cin>>n;
    int ans=primeFactorsum(n);
    cout<<ans;
}
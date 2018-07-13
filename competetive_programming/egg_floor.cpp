#include<bits/stdc++.h>
using namespace std;

int eggDrop(int n, int k)
{
    
    if (k == 1 || k == 0)
        return k;

    if (n == 1)
        return k;

    int min,x, res;

    for (x = 1; x <= k; x++)
    {
        res = max(eggDrop(n-1, x-1), eggDrop(n, k-x));
        if (res < min)
            min = res;
    }

    return min + 1;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
    cin>>n>>k;
    int trials=eggDrop(n,k);
    cout<<trials<<"\n";
    }
    
}


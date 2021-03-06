#include<bits/stdc++.h>
using namespace std;

int eggDrop(int n, int k)
{
    // If there are no floors, then no trials needed. OR if there is
    // one floor, one trial needed.
    if (k == 1 || k == 0)
        return k;

    // We need k trials for one egg and k floors
    if (n == 1)
        return k;

    int min=0, x, res=0;

    // Consider all droppings from 1st floor to kth floor and
    // return the minimum of these values plus 1.
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


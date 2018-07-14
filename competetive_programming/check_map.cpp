#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map <int, int> m;
    int s;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        m[s]++;
    }
    int count=0;
    for(int i=0; i<n; i++)
    {
     if(m[s]==1)
     count++;   

    }
    cout<<count;

}
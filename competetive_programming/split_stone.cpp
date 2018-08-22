#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
        if(x+y==a+b+c && x>=min(a,min(b,c)) && y>=min(a,min(b,c)))
        {
            cout<<"YES\n";
        }
        else
        cout<<"NO\n";
    }
}

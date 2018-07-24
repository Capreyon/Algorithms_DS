#include<bits/stdc++.h>
using namespace std;
int equalstring(string s1, string s2)
{
    int l1=s1.length();
    int l2=s2.length();
    int count=0;
    int n=max(l1,l2);
    for(int i=l1,j=l2;i>0,j>0;i++,j++)
    {
        if(s1[i]==s2[j])
        count++;
    }
    return(l1+l2-2*count);
}
int main()
{
    string s,t;
    cin>>s;
    cin>>t;
    int ans=equalstring(s,t);
    cout<<ans;
}
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
    vector <int> a(n+2);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int max_so_far=a[0];
    int curr_sum=a[0];
    for(int i=0;i<n;i++)
    {
        curr_sum=max(a[i],curr_sum+a[i]);
        max_so_far=max(max_so_far, curr_sum);

    }
    cout<<max_so_far<<"\n";
   }
    
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int n,d;
  cin>>n>>d;
  vector <int> v(n,0);
  for(long long int i=0;i<n;i++)
  {
    cin>>v[i];
  }
  long long int count =0;
  for(long long int i=0;i<n-1;i++)
  {
    double f=((v[i+1]-v[i])/(d*1.0));
    if(f>2.0)
      count=count+2;
      if(f==2.0)
      count=count+1;
    }
  cout<<(count+2);
}
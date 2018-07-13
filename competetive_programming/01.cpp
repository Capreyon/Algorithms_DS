#include<bits/stdc++.h>
using namespace std;
int main()
{
        int a,b,x,i;
        cin>>a>>b>>x;
        int c=a+b;
        int d[c+2];
        int p;
        for(i=0;i<c;i=i+2)
        {
            if(x-1>=0)
         {
                if(a>b)
           {
               d[i]=0;
               x--;
               d[i+1]=1;
               p=i+1;
               a--;
               b--;
           }
           else
           {
               d[i]=1;
                x=x-1;
               d[i+1]=0;
               p=i+1;
              
               a--;
               b--;
           }
           
         }
           
        }
        
            int q=d[p];
            int r;
            if(q==0)
            r=a;
            else 
            r=b;
            for(i=p+1;i<p+r;i++)
            {
                if(d[p]==0)
                d[i]=0;
                else
                d[i]==1;
            } 
            for(i=p+r;i<c;i++)
            {
                if(d[p+r-1]==0)
                d[i]=1;
                else
                d[i]=0;
            }
            for( i=0;i<c;i++)
            cout<<d[i];
            
        }
        
    
    
    

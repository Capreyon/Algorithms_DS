




#include<bits/stdc++.h>
using namespace std;
void count_char(string s)
{
	int n=s.size();
	int count[26];
	memset(count,0,sizeof(count));
	for(int i=0;i<n;i++)
	{
		count[s[i]-'a']++;
	}
	for(int i=0;i<n;i++)
	{
		if(count[s[i]-'a']==1)
		{
			cout<<s[i];
			count[s[i]-'a']=0;
		}
		if(count[s[i]-'a']>1)
		{
			cout<<s[i]<<count[s[i]-'a'];
			count[s[i]-'a']=0;
		}

	}

}
int main()
{
	string s;
	cin>>s;
	count_char(s);

  
}
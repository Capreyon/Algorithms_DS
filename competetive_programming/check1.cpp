#include<bits/stdc++.h>
using namespace std;
int equalstring(string s1,string s2, int count)
	{
		if(s1==s2)
			return count;
		else
		{
			if(s1.length()>s2.length())
			{
				s1.erase(0,1);
				count++;
				return (equalstring(s1,s2,count));
				
			}
			else{
				s2.erase(0,1);
				count++;
				return (equalstring(s1,s2,count));
			}
		}

	}
int main()
{
	string s1,s2;
	cin>>s1;
	cin>>s2;
	int count=0;
	count=equalstring(s1,s2,count);
	cout<<count;

}


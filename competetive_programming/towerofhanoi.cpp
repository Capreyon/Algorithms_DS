#include<bits/stdc++.h>
using namespace std;
void towerofhanoi(int n, int count, char source, char auxiliary)
{
	if(n==0)
		return 0;
	if(n==1)
		return count++;
	else
	{
		cout<<"Disk"<<n<<"move from"<<source<<"to"<<"C";
		count++;
		return (n-1,count,A,B);
	}
	

}



int main()
{
	int n;
	cin>>n;
	int count=0;
	count=towerofhanoi(n, count);
	cout<<count;

}
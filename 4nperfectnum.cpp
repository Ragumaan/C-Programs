#include<iostream>
using namespace std;
int main()
{
	int i,j,n,s=1,sum;
	cout<<"enter the nth number:";
	cin>>n;
	cout<<"the n perfect numbers are";
	for(i=s;i<=n;i++)
	{
	 sum=0;
	 for(j=1;j<i;j++)	
	 {
	 	if(i%j==0)
	 	{
	 		sum+=j;
		 }
	 }
	 if(sum==i)
	 {
	 	cout<<i;
	 }
	}
	return 0;
}

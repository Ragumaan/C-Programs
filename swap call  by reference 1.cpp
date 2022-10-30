#include <iostream>
using namespace std;
int swap(int &n1,int &n2)
{
	
int tem;
tem=n1;
n1=n2;
n2=tem;
return 0;
}
int main()
{

int a,b;
cout<<"enter the first number:";
cin>>a;
cout<<"enter the second number:";
cin>>b;
swap (a,b);
cout<<"the swapping of two number is:"<<"\n A="<<a<<"\n B="<<b<<endl;
return 0;
}



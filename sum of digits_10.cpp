#include <iostream>  
using namespace std;  
int main()  
{  
int N,n,sum=0,m;
cout<<"enter N value";
cin>>N;    
cout<<"Enter a number: ";    
cin>>n;    
while(n>0)    
{    
m=n%10;    
sum=sum+m;    
n=n/10;    
}
    
cout<<"Sum is= "<<sum<<endl;    
return 0;  
}  

#include <iostream>
using namespace std;

int main()
{
	int age,r ;

	cout<<"Enter the age of the person: ";
	cin>> age;

	if (age>=18)
	{
		cout<<"You are eligible for voting.";
	}
	else if(age<=0)
	{
		cout<<"invalid age";
	}
	else
	{
		cout<<"you are not eligible for voting.";
		r=18-age;
		cout<<"\n"<<r<<"years are left for voting.";
	}

	return 0;
}

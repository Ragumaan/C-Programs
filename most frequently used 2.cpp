#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"Enter size of array: ";
  cin>>n;
  int arr[n];
  cout<<"\nEnter array elements:\n";
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  
  // Declaring new array and initialize it to 0
  int new_arr[10001]={0};
  for(int i=0;i<n;i++)
  {
    new_arr[arr[i]]++;
  }
  int max=0;
  int index;
  for(int i=0;i<=10000;i++)
  {
    if(max<new_arr[i])
    {
      index=i;
      max=new_arr[i];
    }
  }
  cout<<"\nMost occurred element in the array is "<<index<<"\n";
  return 0;
}

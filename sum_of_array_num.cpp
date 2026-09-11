#include<iostream>
using namespace std;
int main()
{
 int arr[5],sum=0;
 cout<<"Enter array elements ";
 for(int i=0;i<5;i++)
 {
  cin>>arr[i];
 }
 for (int i = 0; i < 5; i++)
 {
  sum=sum+arr[i];
 }
 cout<<"Sum of all elements "<<sum;

 return 0;

}
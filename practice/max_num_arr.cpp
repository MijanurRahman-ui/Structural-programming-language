#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"Enter number for arr length  ";
 cin>>n;
 int arr[n],i;
 int max=INT_MIN;
 cout<<"Enter number for arr "<<endl;
 for(i=0;i<5;i++)
 {
  cin>>arr[i];
 }

 for(i=0;i<6;i++)
 {
   if(max<arr[i])
   {
    max=arr[i];
   }
 }
  cout<<"Max number is "<<max;

 return 0;
}
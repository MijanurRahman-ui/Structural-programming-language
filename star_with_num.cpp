#include<iostream>
using namespace std;
int main()
{
 int i,j,n;
 cout<<"Enter number ";
 cin>>n;
 for (i=1;i<=n;i++)
 {
  for(j=1;j<=n-i;j++)
  {
   cout<<"  ";
  }
  for(j=i;j>=1;j--)
  {
   cout<<" "<<j;
  }
  cout<<endl;
 }

 return 0;
}
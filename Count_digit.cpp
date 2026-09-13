#include <iostream>
using namespace std;
int main()
{
 int n,count=0;
 cout<<"enter number ";
 cin>>n;
 int x= n; 
 if(n==0)
 {
  count=1;
 }
 else
 {
  while(x>0)
  {
   x=x/10;
   count++;
  }
 }
 cout<<"count digit is "<<count;


 return 0;
}
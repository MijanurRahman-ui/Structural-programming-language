#include <iostream>
using namespace std;
int main()
{
  int num,r,sum=0;
  cout<<"enter number ";
  cin>>num;
  int temp=num;
  while(num>0)
  {
    r=num%10;
    sum=sum*10+r;
    num/=10;
  }
  if(temp==sum)
  {
    cout<<"palindrome number ";
  }
  else
  {
    cout << " not palindrome number ";
  }

  return 0;
}
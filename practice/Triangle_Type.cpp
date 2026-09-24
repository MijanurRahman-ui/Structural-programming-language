#include <iostream>
using namespace std;
int main()
{
 double a,b,c;
 cout<<"enter 3 side  ";
 cin>>a>>b>>c;
 if(a+b>c||b+c>a||a+c>b)
 {
  cout<<"valid triangle ";
 }
 else {
  cout<<"not valid ";
 }

 return 0;
}
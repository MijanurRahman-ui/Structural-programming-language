#include <stdio.h>
void fun1(int myNumber[5])
{
 for(int i=0;i<5;i++)
 {
  printf("%d\n",myNumber[i]);
 }
}
int main()
{
 int myNumber[]={10,20,30,40,50};
 fun1(myNumber);

 return 0;
}
#include<stdio.h>
int main()
{
 int a,b;
 
 for(int i=5;i<=10;i++)
 {
  for(int j=1;j<=10;j++)
  {
   printf("%d X %d = %d\n",i,j,i*j);
  }
  printf("____________\n\n");
 }

 return 0;
}
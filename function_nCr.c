// nCr 

#include <stdio.h>
int fun1(int x)
{
 int fact=1;
 for(int i=1;i<=x;i++)
 {
  fact=fact*i;
 }
 return fact;
}
int main()
{
 int n,r;
 printf("Enter n & r ");
 scanf("%d%d",&n,&r);
 int res=fun1(n)/(fun1(r)*fun1(n-r));
 printf("nCr is %d",res);
}

#include <stdio.h>
void sum(int x,int y)
{
 int sum=x+y;
 printf("%d + %d = %d\n",x,y,sum);
}
int main()
{
 sum(5,34);
 sum(45, 84);
 sum(23, 54);
 sum(55, 44);
 return 0;
}
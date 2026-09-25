#include <stdio.h>
int x = 20;
void fun()
{
 printf("%d\n",++x);
}
int main()
{
 fun();
 printf("%d\n", x);
 return 0;
}
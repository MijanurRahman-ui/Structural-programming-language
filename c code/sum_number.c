#include <stdio.h>
void sum_num()
{
 int a, b, c, sum = 0;
 printf("Enter 3 number for sum :");
 scanf("%d%d%d", &a, &b, &c);
 sum = a + b + c;
 printf("Sum of  3 number is %d", sum);
}
int main()
{
 sum_num();
 return 0;
}
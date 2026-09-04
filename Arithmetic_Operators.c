#include <stdio.h>
int main()
{
 int a, b;
 printf("Enter 2 number ");
 scanf("%d%d", &a, &b);

 printf("Addition is %d\n", a + b);
 printf("Subtraction is %d\n", a - b);
 printf("Multiplication is %d\n", a * b);
 printf("Addition is %.2f\n", (float)a / b);
 printf("Modulus is %d\n", a %b);
 
 return 0;
}
#include<stdio.h>
int main()
{
 int a,b,c;
 printf("Enter 3 number ");
 scanf("%d%d%d",&a,&b,&c);
 printf("%d is largest number ",(a>b && a>c)? a:(b>a && b>c )?b:c);

 return 0;
}
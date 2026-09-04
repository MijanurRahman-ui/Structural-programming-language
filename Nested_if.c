#include <stdio.h>
int main()
{
 int age;
 int isCitizen = 1;
 printf("Enter your age ");
 scanf("%d", &age);
 if (age > 18)
 {
  printf("Old enough for vote!\n");
  if (isCitizen)
  {
   printf("You can also vote!\n");
  }
  else
  {
   printf("Must  be a citizen for vote!\n");
  }
 }
 else
 {
  printf("Not enough for vote \n");
 }

 return 0;
}
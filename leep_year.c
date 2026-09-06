#include <stdio.h>
int main()
{
  int year, x;
  printf("enter num  ");
  scanf("%d", &x);
  if(x%400==0||x%4==0&& x% 100!=0)
  {
   printf("  leep year ");
  }

   else
   {
    printf(" Not leep year ");
  }

  return 0;
  }
#include<stdio.h>
void fun1(char name[])
{
 printf("Hello %s\n",name);
}
int main()
{
 fun1("Rahim");
 fun1("Kahim");
 fun1("Fahim");
 return 0;
}
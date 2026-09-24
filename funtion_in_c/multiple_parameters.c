#include <stdio.h>
void fun1(char name[],int age)
{
 printf("Hello %s, you are %d years old\n", name,age);
}
int main()
{
 fun1("Rahim",34);
 fun1("Kahim",23);
 fun1("Fahim",65);
 return 0;
}
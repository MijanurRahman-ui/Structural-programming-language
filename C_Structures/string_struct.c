#include <stdio.h>
#include <string.h>
struct student
{
 char string[20];
 
};
int main()
{
 struct student s1;
 strcpy(s1.string,"Mijanur Rahman");
 printf("%s",s1.string);
 return 0;
}
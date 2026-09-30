#include <stdio.h>
#include <string.h>
struct myStructure
{
 int myNum;
 char myLetter;
 char myString[30];
};

int main()
{

 struct myStructure s1 = {13, 'B', "AMAR SUNAR BANGLA"};
 printf("Before\n");
 printf("%d\n%c\n%s\n", s1.myNum, s1.myLetter, s1.myString);

 printf("After \n");
 s1.myNum = 30;
 s1.myLetter = 'C';
 strcpy(s1.myString, "BANGLADESH");

 printf("%d\n%c\n%s", s1.myNum, s1.myLetter, s1.myString);

 return 0;
}
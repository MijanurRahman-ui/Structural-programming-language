#include <stdio.h>
struct student
{
 char letter;
 int roll;
};
int main() 
{
 struct student s1;
 s1.letter = 'M';
 s1.roll = 11;
 printf("Letter is %c\n", s1.letter);
 printf("Roll is %d", s1.roll);

 return 0;
}
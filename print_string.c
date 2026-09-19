#include <stdio.h>
int main()
{
 char ch[]="college";

 int i,length=sizeof(ch)/sizeof(ch[0]);
 
 for( i=0;i<10;i++)
 {
  printf("%c",ch[i]);
 }

 return 0;
}

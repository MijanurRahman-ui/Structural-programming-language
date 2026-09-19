#include<stdio.h>
int main()
{
 int arr[]={-4,3,5,-3,7,-67,4,8,0,87};
 int i,length=sizeof(arr)/sizeof(arr[0]);
 for(i=0;i<length;i++)
 {
  if(arr[i]<0)
  {
   continue;
  }
  printf("%d  ", arr[i]);
 }
 

 return 0;
}
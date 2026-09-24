#include<stdio.h>
int main()
{
 int arr[]={4,3,5,6,3,75,8};
 int length=sizeof(arr)/sizeof(arr[0]);
 int max=arr[0],i;
 for(i=0;i<length;i++)
 {
  if(max<arr[i])
  {
   max=arr[i];
  }
 }
 printf("Largest number in array is %d",max);

 return 0;
}
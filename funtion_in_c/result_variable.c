#include<stdio.h>
int calculateSum(int x, int y)
{
 return x + y;
}

int main()
{
 
 int resultArr[6];

 resultArr[0] = calculateSum(9, 3);
 resultArr[1] = calculateSum(23, 2);
 resultArr[2] = calculateSum(135, 15);
 resultArr[3] = calculateSum(54, 1);
 resultArr[4] = calculateSum(8, 7);
 resultArr[5] = calculateSum(2, 1);

 for (int i = 0; i < 6; i++)
 {
  printf("Result-%d is = %d\n", i + 1, resultArr[i]);
 }

 return 0;
}
#include <stdio.h>
int main()
{
  int nfact = 1;
  int n, r, c, ans;
  printf("enter number for n fact ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    nfact = nfact * i;
  }
  printf("n fact is %d\n", nfact);

  int rfact = 1;
  printf("enter number for r fact ");
  scanf("%d", &r);
  for (int i = 1; i <= r; i++)
  {
    rfact = rfact * i;
  }
  printf("r fact is %d\n", rfact);

  int fact = 1;
  c = n - r;
  for (int i = 1; i <= c; i++)
  {
    fact = fact * i;
  }
  printf("n-r fact is %d\n", fact);
  int y;
  y = nfact/(rfact*fact);
  printf("%d C %d  is %d",n,r,y);

  return 0;
}

#include <iostream>
using namespace std;
int main()
{
 int n, i;

 for (i = 1; i <= 5; i++)
 {
  cout << "Enter number ";
  cin >> n;
  int i = 1;
  while (i <= 10)
  {
   cout << n << " X " << i << " = " << n * i << endl;
   i++;
  }
  cout << endl;
 }
 return 0;
}
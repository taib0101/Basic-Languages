//I seek refused with Allah,from the accursed devil
//In the name of Allah the Entirely Merciful the Especially Merciful

#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n, r = 0, t;

  printf("Enter a number to check if it's a palindrome or not\n");
  scanf("%d", &n);

  t = n;

  while (t != 0)
  {
    r = r * 10;
    r = r + t%10;
    t = t/10;
    cout<<r<<endl;
  }

  if (n == r)
    printf("%d is a palindrome number.\n", n);
  else
    printf("%d isn't a palindrome number.\n", n);

  return 0;
}

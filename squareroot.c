#include<stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  printf ("Root of %d is %d", n, squareRoot(n));
  getch();
}
float squareRoot(float n)
{
  float x = n;
  float y = 1;
  float e = 0.000001;
  while(x - y > e)
  {
    x = (x + y)/2;
    y = n/x;
  }
  return x;
}

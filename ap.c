#include<stdio.h>
int main()
{
  int n,s,d,i;
  scanf("%d %d %d",&n,&s,&d);
  for(i=0;i<n;i++)
  {
    printf("%d",s);
    s=s+d;
  }
  return 0;
}

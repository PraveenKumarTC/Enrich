#include <stdio.h>
int main() 
{
  int x[20],n,y,z,i,j;
  printf("enter the size\n");
  scanf("%d",&n);
  printf("enter the numbers\n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&x[i]);
  }
  printf("enter the number and index\n");
  scanf("%d%d",&y,&z);
  for(i=n-1;i>=c;i--)
  {
    x[i+1]=x[i];
   }
  x[z]=y;
  printf("the new array is");
  for(i=0;i<=n;i++)
  {
    printf("%d\n",x[i]);
  }
  return 0;
}

#include<stdio.h>
void main()
{
  int n,rev=0;
  printf("Enter the number to be reversed \n");
  scanf("%d",&n);
  
  while(n>0)
  {
    rev=rev*10;
    rev=rev+(n%10);
    n=n/10;
  }
  printf("Reverse is %d",rev);
}

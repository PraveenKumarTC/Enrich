#include <stdio.h>
int main() 
{
	int a[10],d=0,i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n/2;i++)
	{
		d=a[n-i];
		a[n-i]=a[(n/2)-i];
		a[(n/2)-i]=d;
	}
	for(i=1;i<=n;i++)
	  printf("%d",a[i]);
	return 0;
}

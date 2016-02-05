#include <stdio.h>
void main() 
{
	int a,b,x,n,k=0;
	scanf("%d",&n);
 
	for(a=(n+1);(k==0);a++)
	{ 
		for(b=2,x=0;b<a;b++)
		{
			if(a%b==0)
				x=x+1;
			b++;
		}
		if(x==0)
		{
			printf("%d",a);
			k=k+1;
		}
	}   
}

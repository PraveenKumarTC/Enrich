#include <stdio.h>

int main() 
{
    int a[10],n,no,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&no);
    for(i=0;i<n;i++)
    {
            if(a[i]>no)
                break;
    }
    if(i==n)
        printf("-1");
    else
        printf("%d",i);
	return 0;
}

#include<stdio.h>
int main()
{
    char str[10];
	int n=0,c=0,x,j,count[10]={0};
	scanf("%s",str);
	while(str[n]!='\0') 
		n++;
	for(j=0;j<n;j++)
	{
		if((str[j]>='A')&&(str[j]<='Z'))
		{
			  	x=str[j]-'A';
			    if(count[x]==0)
			    {
			        count[x]=1;
				      c++;
			    }
		}
	}
	printf("%d\n",c);
	return 0;
}

#include<stdio.h>
int main()
{
    int n,s,d,i;
    char type[2];
    scanf("%d %d %d",&n,&s,&d);
    scanf("%s",type);
    if(type[0]=='a'||type[0]=='A')
    {
        printf("The AP series is:");
        for(i=0;i<n;i++)
        {
            printf("%d",s);
            s=s+d;
        }
    }
    if(type[0]=='g'||type[0]=='G')
    {
        printf("The GP series is:");
        for(i=0;i<n;i++)
        {
            printf("%d",s);
            s=s*d;
        }
    }
    return 0;
}

#include<stdio.h>
void main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            for(int j=65;j<=64+i;j++)
            printf("%c ",j);
            printf("\n");
        }
        else
        {
            for(int j=1;j<=i;j++)
            printf("%d ",j);
            printf("\n");
        }
    }
}
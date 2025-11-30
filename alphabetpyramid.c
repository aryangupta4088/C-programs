#include<stdio.h>

void main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        for(int j=n-i;j>=1;j--)
        printf("  ");
        for(int j=65;j<i+65;j++)
        printf("%c ",j);
        for(int j=65+i-2;j>=65;j--)
        printf("%c ",j);
        printf("\n");
    }
}
    
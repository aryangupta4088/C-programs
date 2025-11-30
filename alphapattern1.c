#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the no. ");
    scanf("%d",&n);
    for(i=n+65;i>=65;i--)
    {
        for(j=n+65;j>=65;j--)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    
}


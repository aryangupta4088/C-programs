#include<stdio.h>
void main()
{
    for(int i=1;i<=25;i++)
    {
        for(int j=25-i;j>=1;j--)
        printf("  ");
    
    
        for(int j=65;j<65+i;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
    
}
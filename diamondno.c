#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++)
    {
        for(int j=n/2+1-i;j>=1;j--)
        printf("  ");
        for(int j=1;j<=i;j++)
        printf("* ");
        for(int j=1;j<i;j++)
        printf("* ");
        printf("\n");

    }
     
    int y=n-n/2;
    for(int i=1;i<=y;i++)
    {
        for(int j=1;j<i;j++)
        printf("  ");
        for(int j=1;j<=2*(y-i)+1;j++)
        printf("* ");
        
        printf("\n");
    }
}
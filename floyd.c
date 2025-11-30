#include<stdio.h>
void main()
{
    int n,m,i,j;
    printf("Enter the number of rows ");
    scanf("%d",&n);
    m=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
          printf("%d ",m);
          m++;
        }
     printf("\n");
    }
}
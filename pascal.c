#include<stdio.h>
void main()
{
    int n,val,i,j,k;
    printf("Enter the number of rows ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        printf(" ");
        int val=1;
        for(k=0;k<=i;k++)
        {
            printf("%d ",val);
            val=val*(i-k)/(k+1);
        }
        printf("\n");
    }
}
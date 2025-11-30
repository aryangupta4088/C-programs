#include<stdio.h>
void main()
{
    int n,i,j;
    printf("Enter the rows upto square should b e created :");
    scanf("%d",&n);
    int m=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%d  ",m);
            m++;
        }
        printf("\n");

    }
}
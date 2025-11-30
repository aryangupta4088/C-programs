#include<stdio.h>
void main()
{
    int r,c,i,j;
    printf("Enter row and column ");
    scanf("%d %d",&r,&c);
    for(i=1;i<=r;i++)
    {
        
        for(j=1;j<=c;j++)
        {
          if(i==1)
            {
                printf("*");
            }
            else if(i==r)
            {
                printf("*");
            }
            else
            {
                if(j==1 || j==c)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}
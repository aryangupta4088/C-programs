#include<stdio.h>
void main()
{
    int i,j,l,u,c=0;
    printf("Enter the upper and lower limit :");
    scanf("%d %d",&l,&u);
    for(i=l;i<=u;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            c=1;
        }
        if(c==0)
        printf("%d ",i);
        else
        c=0;
    }

}
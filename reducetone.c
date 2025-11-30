#include<stdio.h>
void main()
{
    int n,sum,k;
    printf("Enter the number to reduce to the single digit");
    scanf("%d",&n);
    while(n>9)
    {
        sum=0;
        while(n>0)
        {
            k=n%10;
            sum=sum+k;
            n=n/10;

        }
        n=sum;
    }
    printf("%d",sum);
}
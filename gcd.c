#include<stdio.h>
void main()
{
    int max=0,min=0,a,b,i;
    printf("Enter the two numbers to find the gcd");
    scanf("%d %d",&a,&b);
    min =(a<b)?a:b;
    for(int i=1;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
        {
            if(max<i)
            max=i;
        }
    }
    printf("%d",max);
}
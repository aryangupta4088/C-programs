#include<stdio.h>
void main()
{
    int count=0,temp,n,i,a[10];
    printf("Enter the number to mask it : ");
    scanf("%d",&n);
    temp=n;
    i=0;
    while(n)
    {
       a[i] =n%10;
       n=n/10;
       i++;
       count++;
    }
    printf("The number is :");
    for(int i=count-2;i>=0;i--)
    printf("%d",a[i]);
}
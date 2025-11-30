#include<stdio.h>
void main()
{
    int sum2=0,keeps=0,sum=0,i,k,temp,n;
    printf("Enter the number to check whether it is a magic or not :");
    scanf("%d",&n);
    temp=n;
    while(n)
    {
        k=n%10;
        sum=sum+k;
        n=n/10;
    }
    keeps=sum;
    k=0;
    while(sum)
    {
        k=sum%10;
        sum2=sum2*10+k;
        sum=sum/10;
    }
   if(temp==keeps*sum2)
   printf("It is a magic number :");
   else
   printf("It is not a magic number :");
}
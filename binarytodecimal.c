#include<stdio.h>
#include<math.h>
void main()
{
    int n, i,k,number =0;
    printf("Enter a binary number to convert to decimal");
    scanf("%d",&n);
    i=0;
    while(n)
    {
        
        k=n%10;
        number=number+k*pow(2,i);
        n=n/10;
        i++;
    }
printf("The decimal equivalent of the given binary number is :%d",number);
}
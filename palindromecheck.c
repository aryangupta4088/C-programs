#include<stdio.h>
int check(int);
void main()
{
    int u,l,i;
    printf("Enter the upper and lower limit to check the palindrome number between them ");
    scanf("%d %d",&u,&l);
    for(i=u;i<=l;i++)
    {
        if(i== check(i))
        printf("%d is a palindrome number \n",i);
    }
}
int check(int n)
{
    int digit=0,k,real=0,temp;
    while(n!=0)
    {
        temp=n%10;
        digit=digit*10+temp;
        n=n/10;
    }
    
    return(digit);
}
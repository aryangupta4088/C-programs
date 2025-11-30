#include<stdio.h>
void hanoi(int , char , char ,char);
void main()
{
    int n;
    printf("Enter the number of disk :");
    scanf("%d",&n);
    hanoi(n,'A','B','C');
}
void hanoi(int n, char a , char b, char c)
{
    if(n<=1)
    printf("Move %d from %c to %c :\n",n,a,c);
    else
    {
        hanoi(n-1,a,c,b);
         printf("Move %d from %c to %c :\n",n,a,c);
         hanoi(n-1,b,a,c);
    }
}
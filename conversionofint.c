#include<stdio.h>
void hexal(int);
void decimal(int);
void main()
{
    int n;
    printf("enter a number to change to binary and octal ");
    scanf("%d",&n);
    decimal(n);
    hexal(n);
}
int i=0;
void decimal(int n)
{
    int temp=0,digit[20],count=0;
    while(n)
    {
    temp=n%2;
    digit[i]=temp;
    n=n/2;
    i++;
    count++;
    }
    printf("The binary representation is :");
    for(i=count-1;i>=0;i--)
    printf("%d",digit[i]);
}
void hexal(int n)
{
   if(n==0){
		printf("0");
	return;
	}
	int k=n;
	int temp;
	int j,i=0;
	char hex[50];
	while(n!=0)
		{
			
			temp=n%16;
			if(temp<10)
				hex[i]=temp+48;
			else
				hex[i]=temp+55;
			i++;
			n/=16;
		}

	for(j=i-1;j>=0;j--)
		{
			
		printf("%c",hex[j]);
							
		}
}
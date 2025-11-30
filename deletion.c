#include<stdio.h>
void main()
{
    int a[20],k,n;
 printf("Enter the number of elements : ");
 scanf("%d",&n);
 printf("Enter the elements");
 for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("Enter the position of the deletion :");
scanf("%d",&k);
for(int i=k;i<n;i++)
{
    a[i]=a[i+1];
}
n=n-1;
printf("The new array is :");
for(int i=0;i<n;i++)
printf("%d ",a[i]);
}

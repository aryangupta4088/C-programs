#include<stdio.h>
void read1(int [],int);
void display(int [],int);
void bubblesort(int [],int);
void main()
{
    int a[20],n;
    printf("Enter the number of elements ");
    scanf("%d",&n);
    read1(a,n);
    printf("The array before sorting : ");
    display(a,n);
    bubblesort(a,n);
    printf("The array after sorting : ");
    display(a,n);
}
void bubblesort(int a[20],int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void read1(int a[20],int n)
{
    for( int i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void display(int a[20],int n)
{
    for(int i=0;i<n;i++)
    printf("%d ",a[i]);
}
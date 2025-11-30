#include<stdio.h>
void read1(int [],int);
void display(int [],int);
void selectionsort(int [],int);
void main()
{
	int a[20],n;
	printf("Enter n value : ");
	scanf("%d",&n);
	printf("Enter %d elements : ",n);
	read1(a,n);
	printf("Elements before sorting : ");
	display(a,n);
	selectionsort(a,n);
	printf("Elements after sorting : ");
	display(a,n);
	
}
void read1(int a[20], int n)
{
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void display(int a[20], int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
void selectionsort(int a[20], int n)
{
	int smallest,temp;
	for(int i=0;i<n-1;i++)
		{
			smallest=i;
			for(int j=i+1;j<n;j++)
				{
					if(a[smallest]>a[j])
					{
						smallest=j;
					}
                }
					if(smallest!= i)
					{
						temp = a[i];
						a[i]=a[smallest];
						a[smallest]=temp;
						
					}
					
				
		}
}

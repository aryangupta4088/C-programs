#include<stdio.h>
void main()
{
    int n;
    printf("Enter the length of the table ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
     for(int j=1;j<=n-i+1;j++)
     printf("* ");
     for(int j=1;j<=2*(i-1)-1;j++)
     printf("  ");
     for(int j=1;j<=n-i+1;j++)
      {
         if(i==1 && j==n-i+1) continue; // Skip last star in first row
         printf("* ");
     }
     printf("\n");
    }

    for(int i=1;i<=n;i++)
    {
     // Left stars
     for(int j=1;j<=n-i+1;j++)
     printf("* ");
     
     // Middle spaces (don't print spaces for first row)
     if(i>1)
     {
         for(int j=1;j<=2*(i-1)-1;j++)
         printf("  ");
     }
     
     // Right stars (skip one star in first row)
     int stars = n-i+1;
     if(i==1) stars--; // Reduce one star in first row
     
     for(int j=1;j<=stars;j++)
     printf("* ");
     
     printf("\n");
    }
}
   

//second method 
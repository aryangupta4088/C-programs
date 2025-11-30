#include<stdio.h>
void main()
{
    int n;
    printf("Enter the length of the table ");
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        int total_numbers = 2 * n - 1;
        
        int num = 1;
        
        // Left numbers
        for(int j = 1; j <= n - i + 1; j++)
        {
            printf("%d ", num);
            num++;
        }
        
        // Middle spaces
        for(int j = 1; j <= 2 * (i - 1) - 1; j++)
        {
            
                  printf("  ");
           
        }
        
        // Right numbers
        for(int j = n-i+1; j >=1; j--)
        {
            if(i == 1 && j == n - i + 1) 
                continue; 
                // Skip last number in first row
            printf("%d ",j);
            
        }
        printf("\n");
    }
}
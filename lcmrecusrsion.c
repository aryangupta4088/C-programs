#include <stdio.h>
int lcmo(int,int);
int findLCM(int a, int b, int c) {
	// find the LCM (Least Common Multiple) of three numbers recursively
    int k=lcmo(lcmo(a,b),c);
	return k;
    
}

int main() {
    int P1, P2, P3;
    scanf("%d %d %d", &P1, &P2, &P3);

    // Validate input
    if (P1 <= 0 || P2 <= 0 || P3 <= 0) {
        printf("Invalid input");
        return 1;
    }
    int lcm = findLCM(P1, P2, P3);
    printf("%d", lcm);

    return 0;
}
int lcmo(int num1, int num2)
{
	int max,c;
    max=(num1>num2)?num1:num2;
    while(1)
    {
        if(max%num1==0 && max%num2==0)
        {
        c=max;
        break;
        }
        max++;

    }
	return c;
}
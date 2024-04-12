#include <stdio.h>

int factorial(int x);

int ncr(int n, int r);

int main()
{
    int n;

    printf("Enter N: ");
    scanf("%d", &n);

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" ");

            for(int k=0;k<n-i;k++)
            {
                int ans=ncr(i,j);
                printf("%d ",ans);
            }
        }
        printf("\n");
    }

    return 0;
}

int factorial(int x)
{
    int i;
    int fact = 1;

    for (i = 2; i <= x; i++)
    {
        fact = fact * i;
    }

    return fact;
}

int ncr(int n, int r)
{
    int ans = factorial(n) / (factorial(r) * factorial(n - r));
    
    return ans;
}
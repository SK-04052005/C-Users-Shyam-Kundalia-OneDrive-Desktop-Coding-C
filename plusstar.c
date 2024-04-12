#include<stdio.h>

int main ()
{

    int n;
    int i,j;

    printf("Enter number of lines (odd only): ");
    scanf("%d",&n);

    if(n%2!=0)
    {
        for(i=1;i<=n;i++)
        {
            int a=(n/2)+1;

            for(j=1;j<=n;j++)
            {
                if( j==a || i==a )
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }

    return 0;

}
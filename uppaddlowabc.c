#include<stdio.h>

int main ()
{

    int n,m;
    int i,j;

    printf("Enter number of lines : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=1;j<n-i+1;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }

    return 0;

}
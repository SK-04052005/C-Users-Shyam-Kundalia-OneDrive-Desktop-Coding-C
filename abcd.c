#include<stdio.h>

int main ()
{

    int n;
    int i,j;

    printf("Enter number of lines : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }

    return 0;

}
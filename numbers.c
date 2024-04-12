#include<stdio.h>

int main ()
{

    int n,m;
    int i,j;

    printf("Enter number of lines : ");
    scanf("%d",&n);
    printf("Enter number of numbers in each lines : ");
    scanf("%d",&m);

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }

    return 0;

}
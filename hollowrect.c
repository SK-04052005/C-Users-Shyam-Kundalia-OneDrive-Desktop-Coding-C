#include<stdio.h>

int main ()
{

    int n,m;
    int i,j;

    printf("Enter Length : ");
    scanf("%d",&m);
    printf("Enter Breadth : ");
    scanf("%d",&n);

    if(n%2!=0)
    {
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=m;j++)
            {
                if( i==1 || i==n || j==1 || j==m )
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
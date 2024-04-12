#include<stdio.h>

int main ()
{

    int n,m;
    int i,j;

    printf("Enter number of lines : ");
    scanf("%d",&n);

    for ( i=1; i<=n; i++ )
    {
        for ( j=1; j<=i; j++ )
        {
            if ( i%2!=0 )
            {
                printf("%d ",j);
            }
            else if ( i%2==0 )
            {
                printf("%c ",j+64);
            }
        }
        printf("\n");
    }

    return 0;

}
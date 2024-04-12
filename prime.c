#include<stdio.h>

int main()
{

    int i,n,dn,sum,x=1;

    printf("This is a program to find prime numbers from i to n\n\n");

    printf("Enter i: ");
    scanf("%d",&i);

    printf("Enter n:");
    scanf("%d",&n);

    if(i<n)
    {
        for(i;i<=n;i++)
        {

            if(i%x!=0)
            {
                x=x++;

                printf("Number %d is prime",i);

            }
            

        }
    }
    else
    {

        printf("Wrong input");
        
    }

    return 0;

}
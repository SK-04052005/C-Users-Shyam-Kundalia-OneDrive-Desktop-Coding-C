#include<stdio.h>

int main()
{
    
    int i,n,temp;

    printf("This is a program to print n numbers\n\n");

    printf("Enter i: ");
    scanf("%d",&i);

    printf("Enter n: ");
    scanf("%d",&n);

    if(i<n)
    {

        for(i;i<=n;i++)
        {
            printf("%d\n\n",i);
        }
        
    }

    else
    {
        printf("Wrong input");
    }

    return 0;

}
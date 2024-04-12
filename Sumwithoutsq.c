#include<stdio.h>

int main()
{
    
    int i,n,sum=0;

    printf("This is a program to print sum of N numbers\n\n");

    printf("Enter i:");
    scanf("%d",&i);

    printf("Enter n:");
    scanf("%d",&n);

    if(i<n)
    {
        for(i;i<=n;i++)
        {
            sum=sum+i;
        }
        printf("Sum from i to n is %d\n\n",sum);
    }

    else
    {
        printf("Wrong input\n\n");
    }
    
    return 0;

}

#include<stdio.h>

int main()
{

    int i,n,sum=0;
    printf("This is a program to print sum of square of N numbers\n\n");

    printf("Enter the value of i ");
    scanf("%d",&i);

    printf("Enter the value on N ");
    scanf("%d",&n);

    if(i<n)
    {
        for(i;i<=n;i++)
            {

                sum=sum+i*i;


            }
    printf("Sum is %d\n",sum);

    }

   

    else
    {
        printf("Wrong input");
    }


    return 0;

}
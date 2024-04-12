#include<stdio.h>

int main()
{
    
    int n,sum=0;
    int temp;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    while(n>0)
    {
        
        temp=n%10;
        sum=sum+temp;
        n=n/10;

    }

    printf("Sum of digits is %d\n\n",sum);
    
    return 0;

}
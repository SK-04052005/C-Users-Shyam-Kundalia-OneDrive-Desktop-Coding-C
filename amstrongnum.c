#include<stdio.h>
#include<math.h>

int main()
{
    
    int i,n,dn,temp,digit;
    double sum=0;

    printf("This is a program to check whether the number is armstrong or not\n\n");

    printf("Enter n:");
    scanf("%d",&n);
    
    dn = n;

    while(dn>0)
    {
        
        dn=dn/10;
        digit++;

    }

    dn=n;

    while(dn>0)
    {
        
        temp=dn%10;
        sum=sum+pow(temp,digit);
        dn=dn/10;

    }

    printf("N is %d\n\n",n);
    printf("Sum of digits is %lf\n\n",sum);

    if(n==sum)
    {

        printf("%d is amstrong number",n);

    }

    else
    {

        printf("%d is not amstrong number",n);

    }

    return 0;


}
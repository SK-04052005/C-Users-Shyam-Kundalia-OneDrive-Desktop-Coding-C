#include<stdio.h>

int main()
{
    
    int i,n,multi,t;
    
    printf("This is a program to print Table of i till n\n\n");
    
    printf("Enter i:");
    scanf("%d",&i);
    
    
    printf("Enter n:");
    scanf("%d",&n);
    
    printf("Table of %d till %d is\n\n",i,n);
    
    for(t=1;t<=n;t++)
    {
        multi=i*t;
        printf("%d*%d=%d\n\n",i,t,multi);
    }
    
    return 0;
    
}
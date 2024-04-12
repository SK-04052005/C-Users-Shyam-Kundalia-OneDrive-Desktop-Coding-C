#include<stdio.h>

int main()
{
    
    int i,j,k,n,temp;
    
    printf("This is a program to print all the numbers divisible by 13 between i and n\n\n");
    
    printf("Enter i: ");
    scanf("%d",&i);
    
    printf("Enter n: ");
    scanf("%d",&n);
    
    if(i<n)
    {
            
        for(i;i<=n;i++)
        {
          if(i%13==0)
          {
              printf("%d\n\n",i);
          }
        }
    }
    else
    {
        printf("Wrong input");
        
    }
    
    return 0;
    
}
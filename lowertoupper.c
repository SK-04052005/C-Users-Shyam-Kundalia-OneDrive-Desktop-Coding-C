//This is a program to convert upper elements of string to lower and lower to upper
#include<stdio.h>
#include<string.h>

int main()
{

    char c[50];
    int i,n;

    printf("Enter Name: ");
    scanf("%[^\n]s",c);

    printf("Name you entered is %s\n",c);

    n=strlen(c);
    
    for(i=0;i<n;i++)
    {
        if(c[i]>65 && c[i]<90)
        {
            c[i]=c[i]+32;
        }
        else if (c[i]>97 && c[i]<122)        
        {
            c[i]=c[i]-32;
        }        
    }

    printf("After conversion\n");
    printf("Name you entered is %s\n",c);
    

    return 0;

}
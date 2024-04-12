#include<stdio.h>

void printline(void);

int main()
{
    
    printline();
    printf("This illustrates the use of of c function\n");
    printline();

    return 0;

}

    void printline(void)
{

    int i;
    
    for(i=1;i<=80;i++)
    {

        printf("=");
        
    }
    
    printf("\n");

}
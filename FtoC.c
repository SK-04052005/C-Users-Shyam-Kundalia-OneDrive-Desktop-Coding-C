#include<stdio.h>

int main()
{
    
    int C,F,temp;

    printf("This is a program to convert F to C\n\n");

    printf("Enter the value of F: ");
    scanf("%d",&F);

    C=(F-32)/1.8;

    printf("Ans in C is %d\n\n",C);
        
    return 0;

}
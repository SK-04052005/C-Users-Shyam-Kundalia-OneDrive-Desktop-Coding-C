#include<stdio.h>

int main()
{
    
    int H,M,S;
    int Seconds;

    printf("This is a program to convert total seconds into Hours,Minutes and Seconds\n\n");

    printf("Enter total seconds : ");
    scanf("%d",&Seconds);

    H=Seconds/3600;
    Seconds=Seconds-(H*3600);
    M=Seconds/60;
    Seconds=Seconds-(M*60);
    S=Seconds;

    printf("Total Seconds represented in H,M,S is %d:%d:%d",H,M,S);
    
    
    return 0;

}
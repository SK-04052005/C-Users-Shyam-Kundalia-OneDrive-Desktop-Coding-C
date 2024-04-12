#include<stdio.h>

int main()
{
    
    int Y,M,D;
    int Days;

    printf("This is a program to convert total number of Days into Year,Month and Days\n\n");

    printf("Enter total number of Days: ");
    scanf("%d",&Days);

    Y=Days/360;
    Days=Days-(Y*360);
    M=Days/30;
    Days=Days-(M*30);
    D=Days;

    printf("Total days represented in Y,M,d is %dY %dM %dD",Y,M,D);
    
    
    return 0;

}
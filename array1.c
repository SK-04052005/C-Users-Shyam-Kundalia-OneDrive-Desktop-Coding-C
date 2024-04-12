#include<stdio.h>

int main()
{
    
    int marks[10];
    int i;

    for(i=0;i<10;i++)
    {

        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&marks[i]);

    }

    for(i=0;i<10;i++)
    {

        printf("Marks of student %d is %d\n\n",i+1,marks[i]);
        
    }
    
    
    
    return 0;

}
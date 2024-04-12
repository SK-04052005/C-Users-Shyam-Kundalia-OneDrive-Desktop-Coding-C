#include<stdio.h>

typedef struct 
{

    int age,sem,rollno;
    float sub1,sub2,sub3;
    char div,gen;
    char name[20],branch[10];
    char email[30],mobile[11];

}stud_info;

int main()
{
    
    stud_info student[200];
    int i;
    int n;

    printf("Enter number of students you want to enter detais of:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        
        printf("Enter details of student[%d]\n",i+1);

        printf("\n Enter name of student[%d]:",i+1);
        scanf("%s",student[i].name);

        printf("\n Enter branch:");
        scanf("%s",student[i].branch);

        printf("\n Enter sem:");
        scanf("%d",&student[i].sem);

        printf("\n Enter division:");
        scanf("%*c%c",&student[i].div);

        printf("\n Enter gender:");
        scanf("%*c%c",&student[i].gen);

        printf("\n Enter rollno:");
        scanf("%d",&student[i].rollno);

        printf("\n Enter age:");
        scanf("%d",&student[i].age);

        printf("\n Enter marks obtained in subject 1:");
        scanf("%f",&student[i].sub1);

        printf("\n Enter marks obtained in subject 2:");
        scanf("%f",&student[i].sub2);

        printf("\n Enter marks obtained in subject 3:");
        scanf("%f",&student[i].sub3);

        printf("\n Enter email ID:");
        scanf("%s",student[i].email);

        printf("\n Enter Mobile No.:");
        scanf("%s",student[i].mobile);


    }

    for(i=0;i<n;i++)
    {

        printf("Entered Details of student[%d] is",i+1);
        printf("\n\n Name is %s",student[i].name);
        printf("\n\n Branch is %s",student[i].branch);
        printf("\n\n Sem is %d",student[i].sem);
        printf("\n\n Division is %c",student[i].div);
        printf("\n\n Gender is %c",student[i].gen);
        printf("\n\n Roll No. is %d",student[i].rollno);
        printf("\n\n Age is %d",student[i].age);
        printf("\n\n Marks in subject 1 is %f",student[i].sub1);
        printf("\n\n Marks in subject 2 is %f",student[i].sub2);
        printf("\n\n Marks in subject 3 is %f",student[i].sub3);
        printf("\n\n Email ID is %s",student[i].email);
        printf("\n\n Mobile No. is %s",student[i].mobile);

    }

    printf("\n THANK YOU \n");
    
    return 0;

}
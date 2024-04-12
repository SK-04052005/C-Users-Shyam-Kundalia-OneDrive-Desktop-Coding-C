#include<stdio.h>
typedef struct stud_info
{
    char name[30];
    char id[20];
    float marks[5];
    float total;
}stud;

int main()
{

    stud s[200];
    int i,j;
    int n;
    int max=0,p=0;

    printf("Enter number of students you want to enter details of:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        
        printf("Enter name of student %d: ",i+1);
        scanf("%s",s[i].name);
        printf("Enter ID of student %d: ",i+1);
        scanf(" %s",s[i].id);

        for(j=0;j<5;j++)
        {
            
            printf("Enter marks of subject %d: ",j+1);
            scanf("%f",&s[i].marks[j]);

        }

    }

    printf("Name \t ID \t\t\t Marks(1) \t\t Marks(2) \t\t Marks(3) \t\t Marks(4) \t\t Marks(5)\n");

    for(i=0;i<n;i++)
    {
     
        printf("%s \t %s \t\t ",s[i].name,s[i].id);

        for(j=0;j<5;j++)
        {
            printf("%f \t\t ",s[i].marks[j]);
        }
        printf("\n");
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            s[i].total+=s[i].marks[j];
        }
    }

    
    for(i=0;i<n;i++)
    {
        for(j=0;j<5;j++)
        {
            if(s[i].total>max)
            {
                max=s[i].total;
                p=i;
            }
        }
    }

    printf("Details of student with highest total \n");
    printf("Name\tID\t\tTotal\n");
    printf("%s\t%s\t%f\n",s[p].name,s[p].id,s[p].total);
    
    
    return 0;

}
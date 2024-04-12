#include<stdio.h>

typedef struct
{

    int age,cent,br,wick;
    char bba[10],bbo[10];
    char debut[5],ipl[20];
    char name[20],country[20];
    char nickname[20],role[20];

}cricketer_info;

int main()
{

    cricketer_info cricketer[200];
    int i;
    int n;

    printf("Enter number of cricketers you want to enter detais of:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {

        printf("Enter details of cricketer[%d]\n",i+1);

        printf("\n Enter name of cricketer[%d]:",i+1);
        scanf("%s",cricketer[i].name);

        printf("\n Enter country:");
        scanf("%s",cricketer[i].country);

        printf("\n Enter Debut Year:");
        scanf("%s",cricketer[i].debut);

        printf("\n Enter age:");
        scanf("%d",&cricketer[i].age);

        printf("\n Enter Role:");
        scanf("%s",cricketer[i].role);

        printf("\n Enter IPL team:");
        scanf("%s",cricketer[i].ipl);

        printf("\n Enter best batting figures:");
        scanf("%s",cricketer[i].bba);

        printf("\n Enter best bowling figures:");
        scanf("%s",cricketer[i].bbo);

        printf("\n Enter total number of centuries:");
        scanf("%d",&cricketer[i].cent);

        printf("\n Enter total number of wickets taken:");
        scanf("%d",&cricketer[i].wick);

        printf("\n Enter career best Ranking achieved:");
        scanf("%d",&cricketer[i].br);

        printf("\n Nickname:");
        scanf("%s",cricketer[i].nickname);

    }

    for(i=0;i<n;i++)
    {

        printf("Entered Details of cricketer[%d] is",i+1);
        printf("\n\n Name is %s",cricketer[i].name);
        printf("\n\n Country is %s",cricketer[i].country);
        printf("\n\n Debut year is %s",cricketer[i].debut);
        printf("\n\n Age is %d",cricketer[i].age);
        printf("\n\n Role: %s",cricketer[i].role);
        printf("\n\n IPL team he play's for is %s",cricketer[i].ipl);
        printf("\n\n Best Batting figures: %s",cricketer[i].bba);
        printf("\n\n Best Bowling figures: %s",cricketer[i].bbo);
        printf("\n\n Total Number of Centuries: %d",cricketer[i].cent);
        printf("\n\n Total Number of Wickets Taken: %d",cricketer[i].wick);
        printf("\n\n Career Best ICC Ranking: %d",cricketer[i].br);
        printf("\n\n Nickname is %s",cricketer[i].nickname);

    }

    printf("\n THANK YOU \n");

    return 0;

}

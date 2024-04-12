#include<stdio.h>
#include<string.h>

typedef struct guests_info
{
    char name[50];
    int familyCount;
} guest;

void collectGuestsInformation(int n, guest g[]);
void sortGuests(int n,guest *ap[]);

int main()
{
   
    int n;
    int i;
    guest g[500];

    printf("\nEnter number of Guests invited for event: ");
    scanf("%d", &n);

    guest *ptr[n];

    for(i = 0; i < n; i++)
    {
        ptr[i]=&g[i];
    }

    collectGuestsInformation(n, g);

    for(int i = 0; i < n; i++)
    {
        printf("Name of Guest %d is %s\n", i+1, g[i].name);
        printf("Number of Family Members with Guest %d is %d\n\n", i+1, g[i].familyCount);
    }

    sortGuests(n,ptr);

    printf("\nSorted Guest info:\n\n");

    for(int i = 0; i < n; i++)
    {
        printf("Name of Guest %d is %s\n", i+1, ptr[i]->name);
        printf("Number of Family Members with Guest %d is %d\n\n", i+1, ptr[i]->familyCount);
    }

    return 0;

}

void collectGuestsInformation(int n, guest g[])
{
    int i;
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter info of Guest %d\n\n", i+1);
        printf("Enter name of Guest %d: ", i+1);
        scanf(" %[^\n]s", g[i].name);   //scanf(" %[A-Z a-z]s", g[i].name);
        printf("Enter number of Family members coming with Guest %d: ", i+1);
        scanf("%d", &g[i].familyCount);
        printf("\n");
    }
}

void sortGuests(int n,guest *ap[])
{
    int i,j;

    for ( i = 0; i < n; i++)
    {
       
        for ( j = 0; j<n-i-1; j++)
        {
            
            if (ap[j]->familyCount>ap[j+1]->familyCount)
            {
                guest *temp=ap[j];
                ap[j]=ap[j+1];
                ap[j+1]=temp;
            }
            
        }
      
    }
    
}
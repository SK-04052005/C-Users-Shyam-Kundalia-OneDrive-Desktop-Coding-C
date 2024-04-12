#include <stdio.h>
struct customer {
char fullName[50];
int totalSpending;
};

void storeCustomersInformation(int n, struct customer customersInfo[])
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter full name of customer %d: ", i + 1);
        scanf(" %[^\n]s", customersInfo[i].fullName); // Read full name with
        printf("Enter total spending for customer %d (in rupees): ", i + 1);
        scanf("%d", &customersInfo[i].totalSpending);
    }
}
void findMaxSpending(int n, struct customer customersInfo[], int *pmaxSpendingValue)
{
    *pmaxSpendingValue = customersInfo[0].totalSpending;
    for (int i = 1; i < n; i++)
    {
        if (customersInfo[i].totalSpending > *pmaxSpendingValue)
        {
            *pmaxSpendingValue = customersInfo[i].totalSpending;
        }
    }
}
int findMaxSpendingCustomers(int n, struct customer customersInfo[], struct customer *ap[], int maxSpendingValue)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (customersInfo[i].totalSpending == maxSpendingValue)
        {
            ap[count] = &customersInfo[i];
            count++;
        }
    }
    return count;
}
int main()
{
    int n;
    printf("Enter the number of customers: ");
    scanf("%d", &n);
    struct customer customersInfo[n];
    storeCustomersInformation(n, customersInfo);
    int maxSpendingValue;
    findMaxSpending(n, customersInfo, &maxSpendingValue);
    struct customer *ap[n];
    int specialCustomersCount = findMaxSpendingCustomers(n, customersInfo, ap, maxSpendingValue);
    printf("\nSpecial Customers (Max Spending Value: %d):\n", maxSpendingValue);

    for (int i = 0; i < specialCustomersCount; i++)
    {
        printf("Customer %d: %s, Total Spending: %d\n", i + 1,
               ap[i]->fullName, ap[i]->totalSpending);
        
    }
    return 0;
    
}

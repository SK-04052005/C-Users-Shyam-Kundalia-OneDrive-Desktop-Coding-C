#include<stdio.h>
int main()
{
    
    int arr[200];
    int n;
    int target;
    int flag;
    int i,j;

    printf("Enter size of array: ");
    scanf("%d",&n);

    printf("Enter Array:\n");

    for(i=0;i<n;i++)
    {
        printf("Enter Element %d: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Enter your target: ");
    scanf("%d",&target);

    printf("Target you get by addition of following indices\n");
    
    for(i=0;i<n;i++)
    {
        for (j=i;j<n;j++)
        {
            if(arr[i]+arr[j]==target)
            {
                printf("[%d,%d]\n",i,j);
                break;
            }
        }
    }

    return 0;
    
}
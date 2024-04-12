#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    printf("Enter name: ");
    scanf("%[^\n]s", name);

    int len = strlen(name);
    
    for (int i = 0; i < len; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%c", name[j]);
        }
        printf("\n");
    }

    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len-i; j++) {
            printf("%c", name[j]);
        }
        printf("\n");
    }

    return 0;
}
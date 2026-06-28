#include <stdio.h>

int main() {
    int roll[5], i;
    char name[5][30];

    for(i = 0; i < 5; i++) {
        printf("Enter Roll and Name: ");
        scanf("%d%s", &roll[i], name[i]);
    }

    printf("\nStudent Records\n");

    for(i = 0; i < 5; i++)
        printf("%d %s\n", roll[i], name[i]);

    return 0;
}
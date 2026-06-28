#include <stdio.h>

struct Book {
    int id;
    char title[30];
};

int main() {
    struct Book b[2];
    int i;

    for(i = 0; i < 2; i++) {
        printf("Enter Book ID and Title: ");
        scanf("%d%s", &b[i].id, b[i].title);
    }

    printf("\nBooks List\n");

    for(i = 0; i < 2; i++)
        printf("%d %s\n", b[i].id, b[i].title);

    return 0;
}
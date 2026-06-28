#include <stdio.h>

struct Book {
    int id;
    char name[50];
};

int main() {
    struct Book b;

    printf("Enter Book ID and Name: ");
    scanf("%d%s", &b.id, b.name);

    printf("\nBook Details\n");
    printf("ID   : %d\n", b.id);
    printf("Name : %s\n", b.name);

    return 0;
}
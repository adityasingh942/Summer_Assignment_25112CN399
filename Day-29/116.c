#include <stdio.h>

struct Item {
    int id, qty;
    char name[30];
};

int main() {
    struct Item i;

    printf("Enter Item ID, Name, Quantity: ");
    scanf("%d%s%d", &i.id, i.name, &i.qty);

    printf("\nInventory Details\n");
    printf("ID       : %d\n", i.id);
    printf("Name     : %s\n", i.name);
    printf("Quantity : %d\n", i.qty);

    return 0;
}
#include <stdio.h>

int main() {
    float balance = 1000, amount;
    int choice;

    printf("1.Deposit\n2.Withdraw\n");
    scanf("%d", &choice);

    if(choice == 1) {
        printf("Amount: ");
        scanf("%f", &amount);
        balance += amount;
    }
    else if(choice == 2) {
        printf("Amount: ");
        scanf("%f", &amount);
        if(amount <= balance)
            balance -= amount;
        else
            printf("Insufficient Balance\n");
    }

    printf("Balance = %.2f", balance);

    return 0;
}
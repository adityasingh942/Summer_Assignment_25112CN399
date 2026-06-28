#include <stdio.h>

int main() {
    int ch;
    float a, b;

    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n");
    scanf("%d", &ch);

    printf("Enter two numbers: ");
    scanf("%f%f", &a, &b);

    switch(ch) {
        case 1: printf("Sum = %.2f", a+b); break;
        case 2: printf("Difference = %.2f", a-b); break;
        case 3: printf("Product = %.2f", a*b); break;
        case 4:
            if(b != 0)
                printf("Quotient = %.2f", a/b);
            else
                printf("Division by zero not allowed");
            break;
        default:
            printf("Invalid Choice");
    }

    return 0;
}
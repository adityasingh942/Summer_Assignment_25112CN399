#include <stdio.h>

int main() {
    int a[10], n, i, sum = 0, ch;

    printf("Enter size: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("1.Display\n2.Sum\n");
    scanf("%d", &ch);

    switch(ch) {
        case 1:
            for(i = 0; i < n; i++)
                printf("%d ", a[i]);
            break;

        case 2:
            for(i = 0; i < n; i++)
                sum += a[i];
            printf("Sum = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n, largestprime = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i = 2; i <= n; i++) {
        while(n % i == 0) {
            largestprime = i;
            n /= i;
        }
    }

    printf("Largest Prime Factor = %d", largestprime);

    return 0;
}
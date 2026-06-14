#include <stdio.h>

int isPalindrome(int n) {
    int temp = n, rev = 0, rem;

    while(temp > 0) {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp /= 10;
    }

    return (n == rev);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPalindrome(num))
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}
#include <stdio.h>

int main() {
    int ans, score = 0;

    printf("Q1. Capital of India?\n");
    printf("1.Delhi 2.Mumbai 3.Chennai 4.Kolkata\n");
    scanf("%d", &ans);

    if(ans == 1)
        score++;

    printf("Q2. 5 + 5 = ?\n");
    printf("1.8 2.10 3.12 4.15\n");
    scanf("%d", &ans);

    if(ans == 2)
        score++;

    printf("Final Score = %d/2\n", score);

    return 0;
}
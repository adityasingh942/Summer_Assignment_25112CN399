#include <stdio.h>

int main() {
    int arr[] = {2, 4, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 18;

    int found = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Pair: %d %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (!found)
        printf("No Pair Found");

    return 0;
}
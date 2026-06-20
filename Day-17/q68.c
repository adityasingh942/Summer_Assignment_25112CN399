#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 5, 7};
    int arr3[] = {1, 2, 3, 5, 8};

    int n1 = 5, n2 = 4, n3 = 5;

    printf("Common Elements: ");

    for (int i = 0; i < n1; i++) {
        int foundInArr2 = 0, foundInArr3 = 0;

        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                foundInArr2 = 1;
                break;
            }
        }

        for (int k = 0; k < n3; k++) {
            if (arr1[i] == arr3[k]) {
                foundInArr3 = 1;
                break;
            }
        }

        if (foundInArr2 && foundInArr3) {
            printf("%d ", arr1[i]);
        }
    }

    return 0;
}
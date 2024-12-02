#include <stdio.h>

int main() {
    int arr[4] = {20, 1, 3, 9};

    printf("Cac so chua duoc sap xep:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    for (int i = 0; i < 4 - 1; i++) {
        for (int j = 0; j < 4 - i - 1; j++) {
            if (arr[j + 1] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep:\n");
    for (int i = 0; i < 4; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    return 0;
}


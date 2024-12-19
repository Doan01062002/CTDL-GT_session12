#include <stdio.h>

void find_duplicates(int arr[], int n) {
    int count[n];
    
    for (int i = 0; i < n; i++) {
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count[i]++;
            }
        }
    }

    int found = 0;

    for (int i = 0; i < n; i++) {
        if (count[i] > 1) {
            int already_printed = 0;
            for (int k = 0; k < i; k++) {
                if (arr[i] == arr[k]) {
                    already_printed = 1;
                    break;
                }
            }
            if (!already_printed) {
                printf("Phan tu %d xuat hien %d lan.\n", arr[i], count[i]);
                found = 1;
            }
        }
    }

    if (!found) {
        printf("Khong co phan tu lap lai.\n");
    }
}

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];

    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    find_duplicates(arr, n);

    return 0;
}


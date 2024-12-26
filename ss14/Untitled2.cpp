#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n;

    printf("Nhap so luong phan tu trong mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap cac phan tu cua mang :\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        
    }

    int target;
    printf("Nhap phan tu can tim: ");
    scanf("%d", &target);

    int result = binarySearch(arr, n, target);
    if (result != -1) {
        printf("Phan tu %d da duoc tim thay o chi muc %d.\n", target, result);
    } else {
        printf("Phan tu %d khong duoc tim thay trong mang.\n", target);
    }

    return 0;
}

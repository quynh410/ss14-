#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
	for (int i = 0; i < size; i++) {
		if (arr[i] == target) {
			return i;
		}
	}
	return -1;
}

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

void insertionSort(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int key = arr[i];
		int j = i - 1;
		while (j >= 0 && arr[j] > key) {
			arr[j + 1] = arr[j];
			j = j - 1;
		}
		arr[j + 1] = key;
	}
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}

int main() {
	int n;
	int target;
	printf("Nhap so luong phan tu trong mang: ");
	scanf("%d", &n);

	int arr[n];
	printf("Nhap cac phan tu cua mang:\n");
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	printf("Mang ban dau: ");
	printArray(arr, n);

	insertionSort(arr, n);

	printf("Mang sau khi sap xep: ");
	printArray(arr, n);


	printf("Nhap gia tri can tim: ");
	scanf("%d", &target);

	int linearResult = linearSearch(arr, n, target);
	if (linearResult != -1) {
		printf("Tim thay %d bang tim kiem tuyen tinh tai chi muc %d.\n", target, linearResult);
	} else {
		printf("%d khong co trong mang bang tim kiem tuyen tinh.\n", target);
	}

	int binaryResult = binarySearch(arr, n, target);
	if (binaryResult != -1) {
		printf("Tim thay %d bang tim kiem nhi phan tai chi muc %d.\n", target, binaryResult);
	} else {
		printf("%d khong co trong mang bang tim kiem nhi phan.\n", target);
	}

	return 0;
}

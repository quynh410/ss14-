#include<stdio.h>

int linearSearch(int arr[], int size, int target) {
	for (int i = 0; i < size; i++ ) {
		if(arr[i] == target) {
			return i;
		}
	}
	return -1;
}

int main () {
	int arr[] = {3, 5, 6, 7, 8, 9};
	int size = sizeof(arr) / sizeof(arr[0]);
	int target  = 9;
	int result = linearSearch(arr, size, target);
	if(result != 1) {
		printf("Phan tu %d da duoc tim thay o chi muc %d. \n", target, result);
	} else {
		printf("Phan tu %d ko duoc tim thay trong sanh sach.\n", target);
	}
}

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1;  
    }

    int mid = low + (high - low) / 2;

    if (arr[mid] == key) {
        return mid;  
    } else if (arr[mid] > key) {
        return binarySearch(arr, low, mid - 1, key);  
    } else {
        return binarySearch(arr, mid + 1, high, key);  
    }
}

int main() {
    int n, key, result;

    printf("Enter number of book IDs: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted book IDs:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the book ID to search: ");
    scanf("%d", &key);

    result = binarySearch(arr, 0, n - 1, key);

    if (result != -1) {
        printf("Book ID %d found at index %d.\n", key, result);
    } else {
        printf("Book ID %d not found in the list.\n", key);
    }

    return 0;
}

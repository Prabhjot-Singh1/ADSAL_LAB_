#include <stdio.h>

int sentinelLinearSearch(int arr[], int n, int key) {
    int last = arr[n - 1];   // Save last element
    arr[n - 1] = key;        // Place sentinel

    int i = 0;

    while (arr[i] != key) {
        i++;
    }

    arr[n - 1] = last;      

    if (i < n - 1 || arr[n - 1] == key)
        return i;  
    else
        return -1; // Not found
}

int main() {
    int arr[5] = {101, 203, 405, 501, 609};
    int n = 5;
    int key = 405;

    int index = sentinelLinearSearch(arr, n, key);
    if (index != -1)
        printf("Customer ID %d found at index %d.\n", key, index);
    else
        printf("Customer ID %d not found.\n", key);

    return 0;
}

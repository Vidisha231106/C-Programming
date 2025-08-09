#include <stdio.h>
#include <string.h>

void bubble_sort(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1 - i; j++) {  // optimized inner loop
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array (ascending):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void selection_sort(int *arr, int n){
    for (int i=0; i < n; i++){
        int head = arr[i];
        int index = i;
        int flag = 0;
        for (int j=i+1; j<n; j++){
            if (arr[j]<head){
                head=arr[j];
                index=j;
                flag=1;
            }
        }
        if (flag==1){
            arr[index]=arr[i];
            arr[i]=head;
        }
    }
    printf("Sorted array (ascending):\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int n, arr1[100], arr2[100];

    printf("Enter the number of elements in the array (max 100): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > 100) {
        printf("Invalid number of elements.\n");
        return 1;
    }

    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr1[i]) != 1) {
            printf("Invalid input for element %d.\n", i + 1);
            return 1;
        }
    }
    memcpy(arr2, arr1, n * sizeof(int));   

    bubble_sort(arr1, n);
    selection_sort(arr2, n);
    return 0;
}

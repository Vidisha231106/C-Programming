//Develop a C program to search an element using Binary search and linear search techniques.

#include <stdio.h>

int binary_search(int *arr, int lower, int upper, int element) {
    if (lower > upper){
        return -1; 
    }
    int mid = (lower + upper) / 2;
    if (arr[mid] == element){
        return mid;
    }
    else if (arr[mid] > element){
        return binary_search(arr, lower, mid - 1, element);
    }
    else{
        return binary_search(arr, mid + 1, upper, element);
    }
}

int linear_search(int *arr, int element, int index, int n){
    if (arr[index]==element){
        return index;
    }
    if (index<n){
        return linear_search(arr, element, index+1, n);
    }
}

int main(){
    int arr[100], n, element;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("\nEnter the elements: \n");
    for (int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element that has to be searched for : ");
    scanf("%d", &element);
    int answer1 = binary_search(arr, 0, n-1, element);
    printf("Element found at index: %d\n", answer1);

    int answer2 = linear_search(arr, element, 0, n);
    printf("Element found at index: %d", answer2);
    return 0;
}
/*a. Program to calculate the sum of n numbers entered by the user using malloc().
b. Program to calculate the sum of n numbers entered by the user using calloc().
c. Program in C using realloc().*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, *arr_ptr;
    printf("Enter the number of elements you want in the array: ");
    scanf("%d", &n);
    arr_ptr = (int *) malloc(sizeof(int)*n);
    if (arr_ptr==NULL){
        printf("Memory not allocated.");
        return 1;
    }
    printf("\nEnter the numbers: \n");
    int *base_ptr = arr_ptr; // Save the base address
    for (int i = 0; i < n; i++) {
        scanf("%d", arr_ptr);
        arr_ptr++;
    }
    int sum=0;
    arr_ptr = base_ptr; // Reset arr_ptr to the start
    printf("Displaying the array: ");
    for (int i=0; i<n; i++){
        printf("%d ", *arr_ptr);
        sum+=(*arr_ptr);
        arr_ptr++;
    }
    printf("The sum of the array elements = %d", sum);

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    printf("\nEnter the number of elements you want in the array: ");
    scanf("%d", &n);
    int *arr2_ptr = (int *) calloc(n, sizeof(int));
    if (arr2_ptr==NULL){
        printf("Memory not allocated.");
        return 1;
    }
    printf("\nEnter the numbers: \n");
    int *base2_ptr = arr2_ptr; // Save the base address
    for (int i = 0; i < n; i++) {
        scanf("%d", arr2_ptr);
        arr2_ptr++;
    }
    sum=0;
    arr2_ptr = base2_ptr; // Reset arr_ptr to the start
    printf("Displaying the array: ");
    for (int i=0; i<n; i++){
        printf("%d ", *arr2_ptr);
        sum+=(*arr2_ptr);
        arr2_ptr++;
    }
    printf("\nThe sum of the array elements = %d", sum);

    ///////////////////////////////////////////////////////////////////////////////////////////////////////////
    int new_size;
    printf("Enter the new size of the array: ");
    scanf("%d", &new_size);

    int *temp_ptr = (int *) realloc(base2_ptr, new_size * sizeof(int));
    if (temp_ptr == NULL) {
        printf("Memory reallocation failed.");
        free(base2_ptr); 
        return 1;
    }
    base2_ptr = temp_ptr;

    if (new_size > n) {
        printf("Enter the new elements:\n");
        for (int i = n; i < new_size; i++) {
            scanf("%d", &base2_ptr[i]);
        }
    }

    printf("Displaying the new array: ");
    sum = 0;
    for (int i = 0; i < new_size; i++) {
        printf("%d ", base2_ptr[i]);
        sum += base2_ptr[i];
    }
    printf("\nThe sum of the new array elements = %d\n", sum);

    free(base_ptr);
    free(base2_ptr);

    return 0;
}
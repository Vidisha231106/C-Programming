//Develop a C program for Matrix multiplication.

#include <stdio.h>

int main(){
    int m1[10][10], m2[10][10], l,m,n, answer[10][10];
    printf("Enter the value of l,m,n : ");
    scanf("%d %d %d", &l, &m, &n);
    
    printf("Enter the numbers of the matrix 1: \n");
    for (int i=0; i<l; i++){
        for (int j=0; j<m; j++){
            scanf("%d", &m1[i][j]);
        }
        printf("\n");
    } 
    printf("\n");
    printf("Enter the numbers of the matrix 2: \n");
    for (int i=0; i<m; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &m2[i][j]);
        }
        printf("\n");
    } 
    printf("\n");

    for (int i=0; i<l; i++){
        for (int j=0; j<m; j++){
            for (int k=0; k<n; k++){
                answer[i][k]=0;
            }
        }
    }
    for (int i=0; i<l; i++){
        for (int j=0; j<m; j++){
            for (int k=0; k<n; k++){
                answer[i][k]+=(m1[i][j]*m2[j][k]);
            }
        }
    }
    
    printf("The answer is: \n");
    for (int i=0; i<l; i++){
        for (int j=0; j<n; j++){
            printf("%d ", answer[i][j]);
        }
        printf("\n");
    }
    return 0;
}
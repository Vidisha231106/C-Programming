//1. Develop a C program to compute the roots of the equation ax2+ bx + c = 0.

#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    printf("Enter the coefficients, a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a == 0){
        printf("This is not a quadratic equation.");
    }
    else{
        int D = b*b - 4*a*c;
        if (D>0){
            float r1 = (-b + pow(D, 0.5))/(2*a);
            float r2 = (-b - pow(D, 0.5))/(2*a);
            printf("The roots of the equation are: %f and %f ", r1, r2);
        }
        else if (D==0){
            float r = -1*b/(2*a);
            printf("The roots of the equation are: %f and %f ", r, r);
        }
        else{
            float real = -1*b/(2*a);
            float imag = D/(2*a);
            printf("The roots of the equation are: %f+%fi and %f-%fi", real, imag, real, imag);
        }
    }
    return 0;
}
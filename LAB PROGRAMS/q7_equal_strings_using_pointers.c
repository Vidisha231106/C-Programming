//Develop a C program using pointers to function to find given two strings are equal or not.

#include <stdio.h>
#include <string.h>

int main(){
    char str1[100], str2[100];
    char * p1 = str1;
    char * p2 = str2;

    printf("Enter the two strings: \n");
    printf("String 1: ");
    scanf("%s", str1);
    printf("String 2: ");
    scanf("%s", str2);
    int index=0;
    if (strlen(str1)!=strlen(str2)){
        printf("The strings are not equal. ");
        return 0;
    }
    while (index<=strlen(str1)){
        if (*p1 == *p2){
            p1++;
            p2++;
        }
        else{
            printf("The strings are not equal. ");
            return 0;
        }
        index++;
    }
    printf("The strings are equal.");
    return 0;
}
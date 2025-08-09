//Using functions develop a C program to perform the following tasks by parameter passing to read a string from the user and print appropriate message for palindrome or not palindrome

#include <stdio.h>
#include <string.h>

int palindrome_check(char *string, int lower, int upper){
    if (lower==upper){
        return -1;
    }
    if (string[lower]==string[upper]){
        return (palindrome_check(string, lower+1, upper-1));
    }
    return 0;
}
int main(){
    char string[100];
    printf("Enter the string: ");
    scanf("%s", string);
    int answer = palindrome_check(string, 0, strlen(string)-1);
    if (answer == -1){
        printf("The string is a palindrome. ");
    }
    else{
        printf("The string is not a palindrome. ");
    }
}
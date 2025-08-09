#include <stdio.h>
#include <string.h>

struct STUDENT {
    int roll_no;
    char name[100];
    int m1, m2, m3;
    float avg;
} stud_arr[100];

int main() {
    int n;
    printf("Enter the number of students in the class: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\nStudent - %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", stud_arr[i].name);  // Reads full name including spaces
        printf("Roll number: ");
        scanf("%d", &stud_arr[i].roll_no);
        printf("Marks 1, 2, 3: ");
        scanf("%d %d %d", &stud_arr[i].m1, &stud_arr[i].m2, &stud_arr[i].m3);

        // Correct float division
        stud_arr[i].avg = (stud_arr[i].m1 + stud_arr[i].m2 + stud_arr[i].m3) / 3.0;
    }

    int r_to_find, flag = 0;
    printf("\nEnter the roll number of the student you want to find: ");
    scanf("%d", &r_to_find);

    for (int i = 0; i < n; i++) {
        if (stud_arr[i].roll_no == r_to_find) {
            printf("\nStudent details found:\n");
            printf("Name: %s\n", stud_arr[i].name);
            printf("Roll Number: %d\n", stud_arr[i].roll_no);
            printf("Average Marks: %.2f\n", stud_arr[i].avg);
            flag = 1;
            break;
        }
    }

    if (!flag) {
        printf("\nNo student found with roll number %d\n", r_to_find);
    }

    return 0;
}

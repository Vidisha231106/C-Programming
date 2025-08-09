#include <stdio.h>
#include <math.h>

int GCD(int n1, int n2) {
    if (n2 == 0)
        return n1;
    return GCD(n2, n1 % n2);
}

int LCM(int a, int b, int multiple) {
    if (multiple % a == 0 && multiple % b == 0)
        return multiple;
    return LCM(a, b, multiple + 1);
}

int Bin_to_Dec(int n, int power) {
    if (n == 0)
        return 0;
    return (n % 10) * pow(2, power) + Bin_to_Dec(n / 10, power + 1);
}



int main() {
    int a, b, gcd, lcm;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    gcd = GCD(a, b);
    lcm = LCM(a, b, (a > b ? a : b));
    printf("The GCD and LCM = %d, %d\n", gcd, lcm);

    int binnum;
    printf("Enter the binary number: ");
    scanf("%d", &binnum);

    int copy_binnum = binnum;
    int n_digits = 0;
    while (copy_binnum != 0) {
        copy_binnum /= 10;
        n_digits++;
    }

    int answer = Bin_to_Dec(binnum, n_digits - 1);
    printf("The decimal form of the number is: %d\n", answer);

    return 0;
}

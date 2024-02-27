#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) return a;
    else return gcd(b, a % b);
}

void input(int *num1, int *den1, int *num2, int *den2) {
    printf("Enter first fraction (numerator/denominator): ");
    scanf("%d/%d", num1, den1);

    printf("Enter second fraction (numerator/denominator): ");
    scanf("%d/%d", num2, den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
    int g = gcd(den1, den2);
    *res_num = (num1 * den2 + num2 * den1) / g;
    *res_den = den1 * den2 / g;
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den) {
    printf("The sum of %d/%d and %d/%d is %d/%d\n", num1, den1, num2, den2, res_num, res_den);
}

int main() {
    int num1, den1, num2, den2, res_num, res_den;
    input(&num1, &den1, &num2, &den2);
    add(num1, den1, num2, den2, &res_num, &res_den);
    output(num1, den1, num2, den2, res_num, res_den);
    return 0;
}

#include <stdio.h>

void input_n_and_r(int *n, int *r) {
    printf("Enter the values of n and r: ");
    scanf("%d %d", n, r);
}

int nCr(int n, int r) {
    if (r > n) {
        return -1; 
    }
    if (r == 0 || n == 0) {
        return 1; 
    }
    int numerator = 1, denominator = 1;
    for (int i = n; i > n - r; i--) {
        numerator *= i;
    }
    for (int i = r; i > 0; i--) {
        denominator *= i;
    }
    return numerator / denominator;
}

void output(int n, int r, int result) {
    if (result == -1) {
        printf("The value of nCr is undefined because r cannot be greater than n.\n");
    } else {
        printf("The value of nCr is: %d\n", result);
    }
}

int main() {
    int n, r, result;
    input_n_and_r(&n, &r);
    result = nCr(n, r);
    output(n, r, result);
    return 0;
}
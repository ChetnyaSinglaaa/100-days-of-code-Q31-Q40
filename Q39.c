//Write a program to find the product of odd digits of a number.
#include <stdio.h>

int main() {
    int num, digit, product = 1, Odd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        num = -num;  // handle negative numbers

    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            Odd = 1;
        }
        num /= 10;
    }

    if (Odd)
        printf("Product of odd digits = %d\n", product);
    else
        printf("No odd digits present.\n");

    return 0;
}
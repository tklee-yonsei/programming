#include <stdio.h>

/**
 * @brief Calculate the factorial of a number using recursion.
 * 
 * @param number The input number to calculate the factorial for.
 * @return int The result of factorial.
 */
int factorial_recursive(int number);

int main() {
    printf("Factorial of 4 is %d.\n", factorial_recursive(4));
    return 0;
}

int factorial_recursive(int number) {
    if (number <= 1) {
        return 1;
    }
    else {
        return number * factorial_recursive(number - 1);
    }
}
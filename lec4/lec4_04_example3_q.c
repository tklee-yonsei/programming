#include <stdio.h>

/**
 * @brief Checks if `a` is prime number or not.
 *
 * @param a - The first value to compare.
 * @return int - 1 if `a` is prime number, 0 otherwise.
 */
int isPrime(int number2);

int main() {
    int number = 29;
    if (isPrime(number)) {
        printf("%d is prime number.\n", number);
    } else {
        printf("%d is not prime number.\n", number);
    }

    return 0;
}

int isPrime(int number2) {
    return 0;
}
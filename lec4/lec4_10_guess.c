/* 사용자가 난수 맞추기 게임 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_NUMBER (100)

/**
 * @brief Initialize a random number generator
 *        with the current time as seed.
 */
void initialize_number_generator(void);

/**
 * @brief Generate and return a random integer
 *        between 1 and MAX_NUMBER.
 *
 * @return int Randomly generated integer.
 */
int get_new_secret_number(void);

/**
 * @brief Guess random number from user input.
 * Notify user input is greater than or less than secret number.
 * If user input is same with secret number, 
 * print congratulation message with trial count.
 *
 * @param secret_number
 */
void read_guesses(int secret_number);

int main(void) {
    char command = '\0';
    int secret_number = 0;

    printf("Guess random number between 1 and 100!!\n\n", MAX_NUMBER);
    initialize_number_generator();
    do {
        secret_number = get_new_secret_number();
        printf("Guess Number!.\n");
        read_guesses(secret_number);
        printf("One more? (Y/N) ");
        scanf("%c", &command);
        printf("\n");
    } while (command == 'y' || command == 'Y');

    return 0;
}

void initialize_number_generator(void) {
    srand((unsigned)time(NULL));
}

int get_new_secret_number(void) {
    return rand() % MAX_NUMBER + 1;
}

void read_guesses(int secret_number) {

}
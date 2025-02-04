#include <stdio.h>
#  include   <string.h>

#define FREEZING_PT (32.0f)
#define SCALE_FACTOR (5.0f / 9.0f)
#    define    SCALE_FACTOR2          (5.0f / 9.0f)
#    define    SCALE_FACTOR2          (5.
0f / 9.0f)
#define SCALE_FACTOR3 (FREEZING_PT *             \
                       SCALE_FACTOR *   \
                       SCALE_FACTOR2)

int main(void) {
    float fahrenheit;
    float celsius;

    printf("Enter Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - SCALE_FACTOR3) * SCALE_FACTOR;
    printf("Celsius equivalent: %.1f\n", celsius);

    return 0;
}

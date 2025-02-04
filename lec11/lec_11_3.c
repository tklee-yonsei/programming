#include <stdio.h>

#define FREEZING_PT (32.0f) /* 매개변수 */
#define SCALE_FACTOR (5.0f / 9.0f) // 혹은 이렇게 표시

int main(void) {
    float fahrenheit = 1.0;
    float celsius;

    #define SCALE_FACTOR4 0

    printf("Enter Fahrenheit temperature: ");
    // scanf("%f", &fahrenheit);

    celsius = (fahrenheit - SCALE_FACTOR4) * SCALE_FACTOR;
    printf("Celsius equivalent: %.1f\n", celsius);

    return 0;
}

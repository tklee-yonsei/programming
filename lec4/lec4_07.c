int get_sum_of_digits(int number) {
    int sum = 0;    /* 지역변수 */

    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    return sum;
}
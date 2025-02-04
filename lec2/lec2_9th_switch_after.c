#include <stdio.h>

int main()
{
    int var_score = 85;

    switch (var_score)
    {
    case 90:
        printf("A grade\n");
        break;
    case 80:
        printf("B grade\n");
        break;
    case 70:
        printf("C grade\n");
        break;
    default:
        printf("F grade\n");
        break;
    }

    return 0;
}

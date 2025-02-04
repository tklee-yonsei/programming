#include <stdio.h>

int main()
{
    int a;

    a = 3;
    if (-5 <= a && a < 4) {
        printf("a(%d) is ge -5 and lt 4.\n", a);
    }

    a = 3;
    if (-5 <= a++ && a < 4) {
        printf("a(%d) is ge -5 and lt 4. :1\n", a);
    }

    a = 3;
    if (-5 <= a && a++ < 4) {
        printf("a(%d) is ge -5 and lt 4. :2\n", a);
    }

    a = 3;
    if (-5 <= ++a && a < 4) {
        printf("a(%d) is ge -5 and lt 4. :3\n", a);
    }

    a = 3;
    if (-5 <= a && ++a < 4) {
        printf("a(%d) is ge -5 and lt 4. :4\n", a);
    }

    return 0;
}

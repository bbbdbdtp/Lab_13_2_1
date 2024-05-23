#include <stdio.h>
#include "var.h"

#define SQR(x) (x) * (x)
#define MAX(y,z) ((y) > (z)) ? (y) : (z)
#define MIN(y,z) ((y) < (z)) ? (y) : (z)
#define ABS(res) ((res) > 0) ? (res) : (res) * -1 

#define PRINTI(w) puts("control output"); \
        printf (#w"= %f\n",(float)w)

int calculate_min(int x, int y, int z) {
    return SQR(MIN(x + y, x + z));
}

int calculate_max(int x, int y, int z) {
    return MAX(SQR(x), 5 * ABS(y - z));
}

int main()
{
    int x, y, z, w;

    puts("Lab 13.2. Using macros and preprocessing directive");

    puts("Input 3 integer numbers");
    scanf_s("%d", &x);
    PRINTI(x);
    scanf_s("%d", &y);
    PRINTI(y);
    scanf_s("%d", &z);
    PRINTI(z);

    if (1 <= z && z < 10) {
        puts("define minimum squared of two numbers");
        w = calculate_min(x, y, z);
    }
    else {
        puts("define maximum of two numbers");
        w = calculate_max(x, y, z);
    }

    printf("w = %d\n", w);

    return 0;
}

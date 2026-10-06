#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    double x = 0.1722;
    double y = 6.33;
    double z = 3.25 * pow(10, -4);
    double gamma = 5.0 * atan(x) - 0.25 * acos(x) * (x + 3.0 * fabs(x - y) + x * x) / (fabs(x - y) * z + x * x);
    printf("gamma = %.6f", gamma);
    return 0;
}
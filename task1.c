#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() 
{
    setlocale(LC_CTYPE, "RUS");
    double r;
    double rd;
    double i;

    puts("Введите градусы");
    scanf("%lf", &r);

    rd = r * M_PI / 180.0;
    i = sin(rd);

    printf("%.6f\n", i);

    return 0;
}

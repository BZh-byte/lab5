#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() 
{
    setlocale(LC_CTYPE, "RUS");
    const double k = 1.2;
    double x;
    double a;
    double b;
    double y;
    puts("ВВедите X");
    scanf("%lf", &x);

    a = exp(k * x);
    b = pow(log(x), 2) + pow(k, 5);
    y = pow(a * a + b * b, 1.0 / 3.0);

    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);

    return 0;
}

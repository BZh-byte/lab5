#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <locale.h>
#include <stdio.h>
#include <math.h>

int main() 
{
    setlocale(LC_CTYPE, "RUS");
    const double k = 1.2;
    double x;
    double a;
    double b;
    double y;

    int A;
    int B;
    int C;

    int usl1;
    int usl2;

    scanf("%lf", &x);

    a = exp(k * x);
    b = pow(log(x), 2) + pow(k, 5);
    y = pow(a * a + b * b, 1.0 / 3.0);

    A = (int)a;
    B = (int)b;
    C = (int)y;

    usl1 = ((A % 2 == 0) && (B % 2 != 0)) || ((A % 2 != 0) && (B % 2 == 0));
    usl2 = (A % 3 == 0) && (B % 3 == 0) && (C % 3 == 0);

    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
    printf("условие выполнено (1 - да, 0 - нет): %d\n",usl1);
    printf("условие выполнено (1 - да, 0 - нет): %d\n", usl2);

    return 0;
}

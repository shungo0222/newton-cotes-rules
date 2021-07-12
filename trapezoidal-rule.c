#include <stdio.h>

#define f(x) (1 / (1 + x*x))

int main(void) {
    int n = 0;
    double a = 0, b = 0, c = 0, sum = 0;

    printf("積分範囲[a, b]=");
    scanf("%lf %lf", &a, &b);
    printf("分割数n=");
    scanf("%d", &n);

    c = (b - a) / n;
    for (float i=a; i<b; i+=c) {
        sum += (f(i) + f(i+c)) * c / 2;
    }

    printf("sum=%f\n", sum);

    return 0;
}
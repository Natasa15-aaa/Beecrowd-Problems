#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, A, B, distance;
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    A = x2 - x1;
    B = y2 - y1;
    distance = sqrt(A *A + B * B);

    printf("%.4lf\n", distance);
    return 0;
}



#include <stdio.h>

int main() {

    double R, VOLUME;
    const double PI = 3.14159;
    scanf("%lf", &R);

     VOLUME = (4/3.0) * PI * R* R * R;
     printf("VOLUME = %.3lf\n", VOLUME);

    return 0;
}

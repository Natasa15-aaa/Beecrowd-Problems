#include <stdio.h>

int main() {
    int start, end;
    scanf("%d %d", &start, &end);

int duration = (end - start + 24) % 24;
     if (duration == 0)
        duration = 24;

    printf("O JOGO DUROU %d HORA(S)\n", duration);
    return 0;
}


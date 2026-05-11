#include <stdio.h>

int main() {
    int i, status;
    int concluidas = 0, pendentes = 0;

    for (i = 0; i < 8; i++) {
        scanf("%d", &status);

        if (status == 1) {
            printf("concluidas\n");
            concluidas++;
        } else {
            printf("pendentes\n");
            pendentes++;
        }
    }

    printf("concluidas: %d\n", concluidas);
    printf("pendentes: %d\n", pendentes);

    return 0;
}

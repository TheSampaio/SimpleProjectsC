#include <stdio.h>

int main() {

    float nota_a = 5.2;
    float nota_b = 7.5;
    float nota_c = 4.6;
    float nota_d = 8.5;

    float media = (nota_a + nota_b + nota_c + nota_d) / 4;

    printf("Media das notas: %.2f", media);

    if (media > 7) {
        printf("\nVoce foi aprovado");
    }

    else if (media == 7) {

        printf ("\nVoce foi aprovado, mas precisa melhorar");
    }

    else {
        printf ("\nVoce foi reprovado");
    }

    return 0;
}


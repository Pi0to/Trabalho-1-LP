#include <stdio.h>

int main() {
    int num, centena, dezena, unidade;

    printf ("Digite um número inteiro de três dígitos: ");
        scanf ("%d", &num);

    if (num < 100 || num > 999) {
        
        printf("Erro: número invalido!\n");
    }

    centena = num / 100;
    dezena = (num / 10) % 10;
    unidade = num % 10;

    printf ("O número invertido eh: %d%d%d\n", unidade, dezena, centena);

    return 0;
}

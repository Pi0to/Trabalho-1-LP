#include <stdio.h>

int main() {
    float temp;
    int opcao;

    printf("Digite a temperatura: ");
    scanf("%f", &temp);

    printf("Escolha a opcao de conversao: \n");
    printf("1 - Celsius para Fahrenheit \n");
    printf("2 - Fahrenheit para Celsius \n");
    scanf("%d", &opcao);

    if (opcao == 1) {
        float fahrenheit = (temp * 9 / 5) + 32;
        printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit\n", temp, fahrenheit);
    } else if (opcao == 2) {
        float celsius = (temp - 32) * 5 / 9;
        printf("%.2f graus Fahrenheit equivalem a %.2f graus Celsius\n", temp, celsius);
    } else {
        printf("Opcao invalida\n");
    }

    return 0;
}

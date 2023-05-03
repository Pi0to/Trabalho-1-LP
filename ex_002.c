#include <stdio.h>
#include <math.h>

int main() {
    
    float lado_1, lado_2, lado_3;
    float p, area;

    printf("Digite os valores dos lados do triangulo: ");
    scanf("%f %f %f", &lado_1, &lado_2, &lado_3);

    // Verifica se os lados formam um triângulo válido
    if (lado_1 + lado_2 <= lado_3 || lado_1 + lado_3 <= lado_2 || lado_2 + lado_3 <= lado_1) {
        printf("Valores invalidos.\n");
    } 
    else {
        // Calcula o perímetro e a área do triângulo
        p = (lado_1 + lado_2 + lado_3) / 2;
        area = sqrt(p * (p - lado_1) * (p - lado_2) * (p - lado_3));

        printf("A area do triangulo eh: %.2f\n", area);
    }

    return 0;
}

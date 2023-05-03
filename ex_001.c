#include <stdio.h>

int main() {
    
    float nota1, nota2, nota3, nota4, nota_final;

    printf ("Digite a primeira nota (trabalho 1): ");
        scanf("%f", &nota1);

    printf ("Digite a segunda nota (trabalho 2): ");
        scanf("%f", &nota2);

    printf ("Digite a terceira nota (trabalho 3): ");
        scanf("%f", &nota3);

    printf ("Digite a quarta nota (prova): ");
        scanf("%f", &nota4);

    nota_final = (nota1 * 2 + nota2 * 2 + nota3 * 2 + nota4 * 3) / 9;

    printf ("Nota final: %.2f\n", nota_final);

    if (nota_final >= 6) {
        
        printf("Aprovado\n");
    } 
    else {
       
        printf("Reprovado\n");
    }

    return 0;
}

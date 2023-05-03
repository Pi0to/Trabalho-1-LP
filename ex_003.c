#include <stdio.h>

int main() {

    int dia, mes, ano;
   
    printf ("Digite a data no formato dd/mm/aaaa: ");
        scanf ("%d/%d/%d", &dia, &mes, &ano);
       
    if (dia > 31 || dia < 1 || mes > 12 || ano < 1){

        printf ("Data invalida!");
    }
    
    else if (dia == 31 && ( mes == 4 || mes == 6 || mes == 9 || mes == 11) ){

        printf ("Data invalida!"); 
    }
    
    else if (dia == 29 &&  0 != ano%4){
     
        printf ("Data invalida!");
    }    
    
    else {
        printf ("Data valida!");
    }
   
    return 0;
}

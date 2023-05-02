int main() {

    int dia, mes, ano;
   
    printf("Digite o dia: ");
        scanf("%d", &dia);
   
    printf("Digite o mes: ");
        scanf("%d", &mes);
   
    printf("Digite o ano: ");
        scanf("%d", &ano);
       
    if (dia > 31 || dia < 1 || mes > 12 || ano < 1){
   
        printf ("Data inválida!");
   
    }
   
    else if (dia == 31 && ( mes == 4 || mes == 6 || mes == 9 || mes == 11) ){
       
        printf ("Data inválida!");
       
    }
   
    else if (dia == 29 &&  0 != ano%4){
     
        printf ("Data inválida!");
    }    
    else {
        printf ("Data válida!");
    }
    return 0;
}
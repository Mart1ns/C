#include <stdio.h>
#include <locale.h>

#include<stdlib.h>



int main() {
    
    setlocale(LC_ALL, "Portuguese");
    float numeros[2], media;
    int i, soma, subtracao, mult;
    media = 0;
    soma = 0;
    subtracao = 0;
    mult = 0;

    for (i = 0; i < 2; i++)
    {
        printf("--> Informe um numero --> ");
        scanf("%f", &numeros[i]);
        
    }
    
    for ( i = 0; i <2; i++)
    {
        soma = soma + numeros[i];
        subtracao = subtracao - numeros[i];
        mult = mult * numeros[i];
       
    }
    
     
    media = soma / i;
    printf("Soma = %d\n", soma);
    printf("Subtracao = %d\n", subtracao);
    printf("Multiplicacao = %d\n", mult);
    printf("Media = %0.2f\n", media);
    printf("Numeros digitados = %d\n", i);


 return 0;
}
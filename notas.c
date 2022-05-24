#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int media(float mediaa, int ii){
    float resultado;
    resultado = mediaa / ii;
    return resultado;
}

int main(){

    //UTF-8
    setlocale(LC_ALL, "Portuguese");

    // Declração de variáveis
    float notas[6], resultado, media_1;
    int i;
    media_1 = 0;

    for  (i = 1; i <= 6; i++)
    {
        printf("--> Digite a %d nota\n--> ", i);
        scanf("%f", &notas[i]);
        media_1 += notas[i];
    }
    
    resultado = media(media_1, i);
    printf("--> Media: %0.2f\n" , resultado);
    printf("--> Soma: %0.2f" , media_1);

    return 0;
}
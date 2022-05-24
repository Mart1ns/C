#include <stdio.h>
#include <locale.h>

#include<stdlib.h>



int main() {
    
    setlocale(LC_ALL, "Portuguese");
    int Decisao, Numero, Contador, Media, numero_comp;
    Contador = 0;
    Media = 0;
    numero_comp = 0;
    do
    {   
        numero_comp = Numero;
        printf("--> Informe um numero:\n--> ");
        scanf("%d", &Numero);
        Contador++;
        Media = (Media + Numero) / Contador;
        
        if (Contador > 1)
        {
            if (Numero > numero_comp )
        {
            printf("--> O numero digitado e maior que o anterior!\n");
        }
        else
        {
            printf("--> O numero digitado nao e maior que o anterior!\n");
        }

        }
        
        for (i = 0; i < con; i++)
        {
            /* code */
        }
        
        
        
        printf("--> Quantidade de numero(s) inseridos: %d\n", Contador);
        printf("--> Media dos %d numeros inseridos: %d\n", Contador, Media);
        
    
        printf("--> Deseja continuar a execucao do programa? 1 = Sim || 0 = Nao\n--> ");
        scanf("%d", &Decisao);
        //system("clear");


    } while (Decisao != 0);
    




    return 0;
}
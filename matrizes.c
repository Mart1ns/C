#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
    setlocale(LC_ALL, "Portuguese");
    //Declaração de Variáveis
	int i, j, numeros[2][2], soma, multi, maior;

	//Povoar a matriz
	soma = 0; multi = 1; maior = 0;
	for(i = 0; i < 2; i++){
		for(j = 0; j < 2; j++){
            
			printf("\n--> Informe o valor que ira ocupar a linha [%d] e a coluna [%d] da matriz. <--\n--> ", i,j);
			scanf("%d", &numeros[i][j]);
            soma += numeros[i][j];

            multi = multi * numeros[i][j];
            
            if (i == 0 && j == 0) {
                numeros[i][j] = maior;
                }
            if (numeros[i][j] > maior) {
                maior = numeros[i][j];
            }
            
			
		}	
	}
    printf("\n");
    printf("--> Soma dos valores da matriz: %d\n--> Multiplicacao dos valores da matriz: %d\n--> Maior numero digitado %d", soma,multi, maior);
	
	
	return 0;
}
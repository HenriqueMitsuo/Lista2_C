#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vetor1[5], vetor2[5];
	int cont1 = 0, cont2 = 0;
	int cont = 0;
	
	while(cont1 < 5) {
		
		printf("1 - Digite o numero %i: ", cont1 + 1);
		scanf("%i", &vetor1[cont1]);
		
		cont1++;
	}
	
	printf("\n");
	
	while(cont2 < 5) {
		
		printf("2 - Digite o numero %i: ", cont2 + 1);
		scanf("%i", &vetor2[cont2]);
		
		cont2++;
	}
	
	system("cls");
	
	while(cont < 5) {
		
		printf("%i - Numeros: %i & %i\n", cont + 1, vetor1[cont], vetor2[cont]);
		printf("%i - Soma = %i\n", cont + 1, vetor1[cont] + vetor2[cont]);
		printf("%i - Diferenca = %i\n", cont + 1, vetor1[cont] - vetor2[cont]);
		printf("%i - Produto = %i\n", cont + 1, vetor1[cont] * vetor2[cont]);
		if(vetor2[cont] == 0) {
			
			printf("%i - Divisao = Nao e possivel dividir por zero!\n\n", cont + 1);
		}
		else {
			
			printf("%i - Divisao = %i\n\n", cont + 1, vetor1[cont] / vetor2[cont]);
		}
		cont++;
	}
	
}

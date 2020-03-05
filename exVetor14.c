#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int M[5][5];
	int SL[5], SC[5];
	int l, c, cont = 0;
	
	for(l = 0; l < 5; l++) {
		
		for(c = 0; c < 5; c++) {
			
			printf("Digite o numero %i da linha %i: ", c, l);
			scanf("%i", &M[l][c]);
		}
	}
	
	for(l = 0; l < 5; l++) {
			
		SL[l] = 0;
		SC[l] = 0;
		
		for(c = 0; c < 5; c++) {
			
			SL[l] += M[l][c];
			SC[l] += M[c][l];
		}
	}
	
	system("cls");
	
	printf("Matriz:\n");
	for(l = 0; l < 5; l++) {
		
		for(c = 0; c < 5; c++) {
			
			printf(" %i ", M[l][c]);
		}
		printf("\n");
	}
	
	printf("Soma Linhas:\n");
	for(l = 0; l < 5; l++) {
	
		printf("%i ", SL[l]);
	}
	
	printf("\nSoma Colunas:\n");
	for(l = 0; l < 5; l++) {
	
		printf("%i ", SC[l]);
	}
}

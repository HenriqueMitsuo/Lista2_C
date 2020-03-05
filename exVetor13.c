#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int M[5][5];
	int l, c, i, j, k, h;
	int DP = 0, DS = 4;
	int somaL4 = 0, somaC2 = 0, somaDP = 0, somaDS = 0 , somaT = 0;
	
	for(l = 0; l < 5; l++) {
		
		for(c = 0; c < 5; c++) {
			
			printf("Digite o numero %i da linha %i: ", c, l);
			scanf("%i", &M[l][c]);
			somaT += M[l][c];
		}
	}
	
	for(i = 0; i < 5; i++) {
		
		somaL4 += M[3][i];
		somaC2 += M[i][1];
	}
	
	for(k = 0; k < 5; k++) {
		
		for(h = 0; h < 5; h++) {
			
			if(h == DP) {
				
				somaDP += M[k][h];
			}
			
			if(h == DS) {
				
				somaDS += M[k][h];
			}
		}
		DP++;
		DS--;
	}
	
	system("cls");
	
	for(l = 0; l < 5; l++) {
		
		for(c = 0; c < 5; c++) {
			
			printf(" %i ", M[l][c]);
		}
		printf("\n");
	}
	
	printf("\nSoma da linha 4: %i\n", somaL4);
	printf("Soma da Coluna 2: %i\n", somaC2);
	printf("Soma da Diagonal Principal: %i\n", somaDP);
	printf("Soma da Diagonal Secundaria: %i\n", somaDS);
	printf("Soma da Total da Matriz: %i\n", somaT);
	
}

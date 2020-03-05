#include <stdio.h>
#include <stdlib.h>

#define M 3
#define N 4

int main() {
	
	float matriz[M][N];
	int l, c;
	float CN;
	float Esparsidade;
	
	for(l = 0; l < M; l++) {
		
		for(c = 0; c < N; c++) {
			
			printf("Digite o numero %i da linha %i: ", c, l);
			scanf("%i", &matriz[l][c]);
			
			if(matriz[l][c] == 0) {
				
				CN++;
			}
		}
	}
	
	Esparsidade = CN / 12;
	
	printf("Grau de esparsidade da matriz = %0.4f", Esparsidade);
	
}

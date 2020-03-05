#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int notas[30];
	int erros = 0, acimaM = 0, notaV = 0;
	float media;
	int i = 0, j = 0;
	
	while(i < 30) {
		
		printf("Digite a nota %i: ", i + 1);
		scanf("%i", &notas[i]);
		
		i++;
	}
	
	while(j < 30) {
		
		if(notas[j] > 10) {
			
			erros++;
		}
		else if(notas[j] > 7) {
					
			acimaM++;
			notaV++;
			media += notas[j];
		}
		else{
			
			notaV++;
			media += notas[j];
		}
		
		j++;
	}
	
	
	
	printf("\nNotas Invalidas: %i\n", erros);
	printf("Media das Notas Validas: %0.2f\n", media / notaV);
	printf("Notas Acima da Media: %i\n", acimaM);
}

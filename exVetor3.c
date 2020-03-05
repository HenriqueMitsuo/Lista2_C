#include <stdlib.h>
#include <stdio.h>

int NumeroAparicoes(int vet[], int num){
	
	int quant;
	int i = 0;
	
	while(i < 5){
		
		if(vet[i] == num){
			
			quant++;
		}
		
		i++;
	}
	
	return quant;	
}

int main () {
	
	int vet[5] = { 1, 5, 3, 5, 5};
	int num = 5;
	
	printf("Numero de aparicoes: %i", NumeroAparicoes(vet, num));
	
}

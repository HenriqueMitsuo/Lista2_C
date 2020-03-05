#include <stdlib.h>
#include <stdio.h>

int main () {
	
	int vet[15];
	
	int P[15], I[15];
	
	int l = 0, k = 0, j = 0, P_pos = 0, I_pos = 0;
	
	while(l < 15) {
		
		printf("Digite o numero %i: ", l);
		scanf("%i", &vet[l]);
		l++;
	}
	
	system("cls");
	
	while(j < 15) {
		
		if(vet[j] % 2 == 0){
			
			P[P_pos] = vet[j];
			P_pos++;
		}
		else {
			
			I[I_pos] = vet[j];
			I_pos++;
		}
		
		j++;
	}
	printf("Pares: ");
	while(k < 15){
		
		printf("%i ", P[k]);
		
		k++;
	}
	
	k = 0;
	printf("\n");
	
	printf("Impares: ");
	while(k < 15){
		
		printf("%i ", I[k]);
		
		k++;
	}
}

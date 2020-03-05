#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int matriz[5][5] = { 0,  1,  2,  3,  4,
						 5,  6,  7,  8,  9,
						10, 11, 12, 13, 14,
						15, 16, 17, 18, 19,
						20, 21, 22, 23, 24 };
						
	int vetor[5], cont = 0;					
						
	int i, j, k = 0, dig = 4;
	
	for(i = 0; i < 5; i++) {
		
		for(j = 0; j < 5; j++) {
			
			if(dig == j){
				
				vetor[cont] = matriz[i][j];
				cont++;
				dig--;
			}
		}
	}  
	
	while(k < 5) {
		
		printf("%i ", vetor[k]);
		k++;
	}
}

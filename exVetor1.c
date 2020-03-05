#include <stdlib.h>
#include <stdio.h>

int main () {
	
	int vet[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
	int i;
	int Num = 0;
	int Pos = 0;
	
	for(i = 0; i < 15; i++) {
		
		if(Num < vet[i]){
			
			Num = vet[i];
			Pos = i;
		}
	}
	
	printf("O maior numero: %i\nPosicao: %i", Num, Pos);
}

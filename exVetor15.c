#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int A[4][4] = {0, 0, 0, 0,
				   0, 0, 2, 2,
				   0, 0, 0, 0,
				   0, 0, 0, 0};
				   
	int v1 = 0, v2 = 0;
	int contL = 0, contC = 0;
	int l, c;
	
	for(l = 0; l < 5; l++) {
		
		
		v1 = 0;
		v2 = 0;
		
		for(c = 0; c < 5; c++) {
			
			if(A[l][c] == 0) {
				
				v1++;
			}
			
			if(A[c][l] == 0) {
				
				v2++;
			}
		}
		
		if(v1 >= 4) {
			contL++;
		}
		
		if(v2 >= 4) {
			contC++;
		}
	}
				   
	printf("Linhas nulas: %i\nColunas nulas: %i", contL, contC);
}

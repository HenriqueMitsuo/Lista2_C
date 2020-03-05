#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int B[7][5] = {	0,  1,  2,  3,  4,
					5,  6,  7,  8,  9,
					10, 11, 12, 13, 14,
					15, 16, 17, 18, 19,
					20, 21, 22, 150, 24,
					25, 26, 27, 28, 29,
					30, 31, 32, 33, 34, };
					
	int numT, numM, posL, posC;
	int l = 0, c = 0;
	
	while(l < 7) {
		
		c = 0;
		while(c < 5) {
			
			numT = B[l][c];
			
			if(numT > numM){
				
				numM = B[l][c];
				posL = l;
				posC = c;
			}
			c++;
		}
		l++;
	}
	
	printf("O maior numero e: %i\nNa posicao:\nLinha: %i\nColuna: %i", numM, posL, posC);
	
}

#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int X[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int Y[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int produto;
	int PE;
	
	int i = 0;
	
	while(i < 20) {
		
		PE += X[i] * Y[i];
		i++;
	}
	
	printf("O produto escalar e: %i", PE);
}

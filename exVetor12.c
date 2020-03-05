#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int M[3][3] = {1, 2, 4,
				   2, 1, 6,
				   4, 6, 1};
						
	if (M[0][1] == M[1][0] && M[0][2] == M[2][0] && M[1][2] == M[2][1]) {
		
		printf("A matriz e simetrica");
	}
	
	else {
		
		printf("A matriz nao e simetrica");
	}
}

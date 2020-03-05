#include <stdlib.h>
#include <stdio.h>

int main () {
	
	int numAlunos;
	int i = 0, j = 0;
	
	printf("Digite a quantidade de cadastros: ");
	scanf("%i", &numAlunos);
	
	float G1[numAlunos], G2[numAlunos], Media[numAlunos];
	
	while(i < numAlunos) {
		
		printf("\nAluno %i", i+1);
		
		printf("\nDigite a nota G1: ");
		scanf("%f", &G1[i]);
		
		printf("\nDigite a nota G2: ");
		scanf("%f", &G2[i]);
		
		Media[i] = (G1[i] + G2[i]) / 2;
		
		i++;
		
		system("cls");
	}
	
	while(j < numAlunos){
		
		printf("Aluno %i - G1 = %0.2f - G2 = %0.2f - Media = %0.2f\n\n", j+1, G1[j], G2[j], Media[j]);
		j++;
	}
	
	
}

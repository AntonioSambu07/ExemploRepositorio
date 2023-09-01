#include <stdio.h>
#include <stdlib.h>

void imprimeMedias(float notas[])
	{
		int i;
		for(i = 0; i < 4; i++)
			printf("Aluno %i: %.2f\n", i+1, notas[i]);
	}


void recebeNotas()
{
	int i, j;
	float aux=0;
	float matAlunos[4][4];
	float vetNotas[4];

	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			scanf("%f", &matAlunos[i][j]);
			aux += matAlunos[i][j];
		}
		vetNotas[i] = aux / 4.0;
		printf("Digite 4 notas de Aluno %d\n", i+2);
		aux = 0;
	}
	imprimeMedias(vetNotas);
}


int main()
{
	printf("Digite 4 notas de aluno 1\n");

	recebeNotas();

	return 0;
}

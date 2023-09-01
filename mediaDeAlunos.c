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
	float matAlunos[4][4];
	float vetNotas[4];

	
	for(i = 0; i < 4; i++){
		for(j = 0; j < 4; j++){
			scanf("%f", &matAlunos[i][j]);
			vetNotas[i] = matAlunos[i][j] /4.0;
		}
		printf("Digite 4 notas de Aluno i+2\n");
	}
	imprimiMedias(vetNotas);
}


int main()
{
	printf("Digite 4 notas de aluno 1\n");

	recebeNotas();

	return 0;
}

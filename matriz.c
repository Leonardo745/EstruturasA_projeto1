//Funções que modificam as matrizes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matriz.h"
#include "lista.h"

//printf("\nDEBUG - PASSEI\n");


int DeclaraMatriz(lista **inicio, char nomeMatriz[], int dimensaoI, int dimensaoJ)
{
	lista *aux, *novo;
	int **M;
	int i, j;

	M = (int **) malloc (dimensaoI * sizeof (int *));

	for (i = 0; i < dimensaoI; i++)
	{
		M[i] = (int *)malloc(dimensaoJ * sizeof(int));
		/*for (j = 0; j < dimensaoJ; j++)
		{
			scanf("%i", &M[i][j]);
		}*/
		printf("\nDEBUG - PASSEI - M[%d]\n", i);
	}

	novo = (lista *) malloc (sizeof(lista));
	printf("\nDEBUG - PASSEI - Criou novo\n");

	if((!novo)||(!M)) return 0;
	printf("\nDEBUG - PASSEI - Novo Deu Certo\n");
	strcpy((aux->nome), nomeMatriz);
	novo->dimensaoI = dimensaoI;
	novo->dimensaoJ = dimensaoJ;
	novo->pMatriz = M;
	novo->prox = NULL;
	printf("\nDEBUG - PASSEI - Coisa do ?Jeff\n");

	if(!(*inicio))
	{
		(*inicio) = aux;
		return 1;
	}
	else
	{
		while (aux->prox)
		{
			aux = aux->prox;
		}

		aux->prox = novo;
		return 1;
	}

}


#include <stdio.h>
#include "lista.h"
#include "matriz.h"

int main() {
	/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tLista lista;
struct tLista
{
	char nome[20];
	int **pMatriz, dimensaoI, dimensaoJ;
	lista  *prox;
};

int declaraMatriz(lista **inicio, char nomeMatriz[], int dimensaoI, int dimensaoJ)
{
	lista *aux, *novo;
	int **M;
	int i, j;

	M = (int **) malloc (dimensaoI * sizeof (int *));

	for (i = 0; i < dimensaoI; ++i)
	{
		M[i] = (int *)malloc(dimensaoJ * sizeof(int));
		for (j = 0; j < dimensaoJ; j++)
		{
			scanf("%i", &M[i][j]);
		}
	}	
	novo = (lista *) malloc (sizeof(lista));

	if((!novo)||(!M)) return 1;

	strcpy((aux->nome), nomeMatriz);
	novo->dimensaoI = dimensaoI;
	novo->dimensaoJ = dimensaoJ;
	novo->pMatriz = M;
	novo->prox = NULL;

	if(!(*inicio))
	{
		(*inicio) = aux;
		return 0;
	}
	else
	{
		while (aux->prox)
		{
			aux = aux->prox;
		}

		aux->prox = novo;
		return 0;
	}

}

int main()
{
	lista *inicio = NULL;
	int op, dimensaoI, dimensaoJ;
	char nomeMatriz[20];

	do
	{
		printf("MENU\n\n");
		printf("1) Declarar matriz\n");
		scanf("%i", &op);

		switch(op)
		{
			case 1: printf("Nome da matriz: ");
			scanf("%s", nomeMatriz);
			printf("Dimensao I: ");
			scanf("%i", &dimensaoI);
			printf("Dimensao J: ");
			scanf("%i", &dimensaoJ);

			declaraMatriz(&inicio, nomeMatriz, dimensaoI, dimensaoJ);
			break;
		}

	}while (op != 9);

}*/
	return 0;
}
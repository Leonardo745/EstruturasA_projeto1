//Funções que modificam as matrizes
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "matriz.h"
#include "lista.h"

//printf("\nDEBUG - PASSEI\n");


int DeclaraMatriz(lista **inicio, char nomeMatriz[], int dimensaoI, int dimensaoJ)
{
	
	if((dimensaoI > 50 || dimensaoI < 1) || (dimensaoJ > 50 || dimensaoI < 1)) return 0;

	lista *aux = (*inicio);

	if(aux){
		//Existe elementos na lista de struct
		while(aux->prox && strcmp(aux->nome, nomeMatriz) != 0){
			aux = aux->prox;
		}
		if(strcmp(aux->nome, nomeMatriz) == 0) return 0;
	}

	lista *novo;
	int **M;
	int i;
	
	novo = (lista *) malloc (sizeof(lista));
	M = (int **) malloc (dimensaoI * sizeof (int *));
	if (!M || !novo) return 0;

	for (i = 0; i < dimensaoI; i++)
	{
		M[i] = (int *)malloc(dimensaoJ * sizeof(int));
	}
	
	
	
	strcpy(novo->nome, nomeMatriz);
	novo->dimensaoI = dimensaoI;
	novo->dimensaoJ = dimensaoJ;
	novo->pMatriz = M;
	novo->prox = NULL;

	if(!aux){
		*inicio =
	}
	

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


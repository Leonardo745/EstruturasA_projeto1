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
	float **M;
	int i;
	
	novo = (lista *) malloc (sizeof(lista));
	M = (float **) malloc (dimensaoI * sizeof (float *));
	if (!M || !novo) return 0;

	for (i = 0; i < dimensaoI; i++)
	{
		M[i] = (float *)calloc(dimensaoJ, sizeof(float));
	}
	
	
	
	strcpy(novo->nome, nomeMatriz);
	novo->dimensaoI = dimensaoI;
	novo->dimensaoJ = dimensaoJ;
	novo->pMatriz = M;
	novo->prox = NULL;

	if(!aux){
		*inicio = novo;
	}else{
		aux->prox = novo;
	}
	

	return 1;

}

int ImprimirMatriz(char nome[], lista **inicio){
					
	lista *elemento = AcharNome(*inicio, nome);
	if(!elemento) return 0;
	
	int i, j;
	for(i = 0; i < elemento->dimensaoI;i++){
		for(j = 0;j < elemento->dimensaoJ;j++)
			printf("%6.2f", elemento->pMatriz[i][j]);

		printf("\n");
	}
}


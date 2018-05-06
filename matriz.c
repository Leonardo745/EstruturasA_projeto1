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

int TransporMatriz (lista **inicio, char nomeMatriz[], char matrizResultante[]){
	
	//Verificar se já existe uma matriz com o nome da matriz resultante
	lista *elemento = AcharNome(*inicio, matrizResultante);
	if (elemento) return 0;

	//Verificar se existe a matriz com o nome escolhido
	elemento = AcharNome(*inicio, nomeMatriz);
	if(!elemento) return 0;
	
	//Criar matriz e struct
	lista *novo = (lista *) malloc (sizeof(lista));
	float **M = (float **) malloc (elemento->dimensaoI * sizeof (float *));
	if (!M || !novo) return 0;

	//Transpor a matriz
	int i, j;
	for (i = 0; i < elemento->dimensaoJ; i++)
	{
		M[i] = (float *)calloc(elemento->dimensaoI, sizeof(float));
		for (j = 0;j < elemento->dimensaoI;j++){
			M[i][j] = elemento->pMatriz[j][i];
		}
	}

	strcpy(novo->nome, matrizResultante);
	novo->dimensaoI = elemento->dimensaoJ;
	novo->dimensaoJ = elemento->dimensaoI;
	novo->pMatriz = M;
	novo->prox = NULL;

	lista *aux = AcharFim(*inicio);

	//Adicionar matriz transposta no final da lista
	aux->prox = novo;

	//Imprimir matriz transposta
	ImprimirMatriz(matrizResultante, inicio);

	return 1;
}

int AtribuirElemento (lista **inicio, char nomeMatriz[], int dimensaoI, int dimensaoJ, int valor)
{
	lista *aux = AcharNome(*inicio, nomeMatriz);
	
	if(aux)
	{	
		if( (dimensaoI >= (aux->dimensaoI)) || (dimensaoJ >= (aux->dimensaoJ)) ) return 0;

		aux->pMatriz[dimensaoI][dimensaoJ] = valor;
		printf("OK\n");
		return 1;
	}
	return 0;

}

int AtribuirLinha (lista **inicio, char nomeMatriz[], int dimensaoI, int valores[], int quant)
{
	int i, j = 0;
	lista *aux = AcharNome(*inicio, nomeMatriz);
	
	if(aux)
	{
		if( (dimensaoI >= (aux->dimensaoI)) || (quant > (aux->dimensaoJ)) ) return 0;

		for(i = 0; i < quant; i++)
		{
			aux->pMatriz[dimensaoI][j] = valores[i];
			j++;
			
		}
		printf("OK\n");
		return 1;
	}
	return 0;
}

int AtribuirColuna (lista **inicio, char nomeMatriz[], int dimensaoJ, int valores[], int quant)
{
	int i;
	lista *aux = AcharNome(*inicio, nomeMatriz);

	while(aux && (strcmp ((aux->nome), nomeMatriz)) )
	{
		aux = aux->prox;
	}
	
	if(aux)
	{
		if( (quant > (aux->dimensaoI)) || (dimensaoJ >= (aux->dimensaoJ)) ) return 0;

		for(i = 0; i < quant; i++)
		{
			aux->pMatriz[i][dimensaoJ] = valores[i];
			
		}
		printf("OK\n");
		return 1;
	}
	return 0;
}

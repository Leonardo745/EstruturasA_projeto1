//Programa principal (Onde acontece a mágica)
#include <stdio.h>
#include "lista.h"
#include "matriz.h"

int main(){
	/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tLista lista;

struct tLista
{
	char nome[20];
	int **pMatriz;
	lista  *prox;
};


int declaraMatriz(lista **inicio, char nomeMatriz[], int dimensaoI, int dimensaoJ)
{
	lista *aux;
	int **M;
	int i;

	//M = (int *) malloc (dimensaoI * sizeof (int *));
	//for (i = 0; i < dimensaoI; ++i)
	//M[i] = (int *) malloc (dimensaoJ * sizeof (int));


	aux = (lista *) malloc (sizeof(lista));

	if(!aux) return 1;
	
	if(!(*inicio))
	{
		strcpy((aux->nome), nomeMatriz);
		//lista->pMatriz = M;
		aux->prox = NULL;
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
		}
		
	}while (op != 9);	
		
		
}
	*/

	return 0;
}


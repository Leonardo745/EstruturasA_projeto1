#include <stdio.h>
#include <stdlib.h>
#include "lista.h"
#include "matriz.h"

int main() {
	lista *inicio = NULL;
	int op, dimensaoI, dimensaoJ;
	char nomeMatriz[20];

	do
	{
		//system("clear");
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

			if(DeclaraMatriz(&inicio, nomeMatriz, dimensaoI, dimensaoJ)){
				printf("Matriz \"%s\" criada com sucesso!\n", nomeMatriz);
				getchar(); 
			}else{
				printf("Deu ruim na criacao da matriz\n");
			}
			break;
		}

	}while (op != 9);

	return 0;
}




#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio_ext.h>
#include "lista.h"
#include "matriz.h"

int main() {
	lista *inicio = NULL;
  
	float valores[50], valor;
	int dimensaoI, dimensaoJ, i;
	char nomeMatriz[20], nomeMatriz_2[20], matrizResultante[20], op[3];

	do
	{
		//Remover Menu no final do Projeto
		/*printf("\n\n|------------------------------------------------- MENU -------------------------------------------------|\n");
		printf("|CM- Declarar uma matriz (CM <i> <j>)		       							 |\n");
		printf("|DM- Destruir uma matriz (DM <nome>)		       							 |\n");
		printf("|IM- Imprimir uma matriz (IM <nome>)		       							 |\n");
		printf("|AE- Atribuir um elemento a uma matriz (AE <nome> <i> <j> <valor>)	       				 |\n");
		printf("|AL- Atribuir uma linha a uma matriz (AL <nome> <i> <val1> ... <valn> #)	       			 |\n");
		printf("|AC- Atribuir uma coluna a uma matriz (AC <nome> <j> <val1> ... <valm> #)	       			 |\n");
		printf("|TM- Transpor uma matriz (TM <nome> <nome-resultado sem espaços>)		   			 |\n");
		printf("|SM- Somar duas matrizes (SM <nome1> <nome2> <nome-resultado sem espaços>)		       		 |\n");
		printf("|DV- Dividir uma matriz por outra (elemento a elemento) (DV <nome1> <nome2> <nome-resultado sem espaços>)|\n");
		printf("|MM- Multiplicar uma matriz por outra (MM <nome1> <nome2> <nome-resultado sem espaços>)		         |\n");
		printf("|ME- Multiplicar duas matrizes (elemento a elemento) (ME <nome1> <nome2> <nome-resultado sem espaços>)   |\n");
		printf("|FE- Sair					       							 |\n");
		printf("|--------------------------------------------------------------------------------------------------------|\n");
		printf("Opcao: ");
    */
		__fpurge(stdin);
		scanf("%s", op);
		
		//REMOVER
		if (strcmp(op, "ITM") == 0){
			ImprimirTodasMatriz(&inicio);
		}else
		//
			
		if(strcmp(op, "CM") == 0){
			//Criação da Matriz
			scanf("%s %d %d", nomeMatriz, &dimensaoI, &dimensaoJ);
			if(DeclaraMatriz(&inicio, nomeMatriz, dimensaoI, dimensaoJ)) printf("OK\n");
			else printf("ERRO\n");

		}else if(strcmp(op, "DM") == 0){
			//Destruir Matriz

			scanf("%s", nomeMatriz);
			if(DestruirMatriz(&inicio, nomeMatriz)) printf("OK\n");
			else printf("ERRO\n");

		}else if(strcmp(op, "IM") == 0){
			//Imprimir uma matriz
			scanf("%s", nomeMatriz);
			if(!ImprimirMatriz(nomeMatriz, &inicio)) printf("ERRO\n");

		}else if(strcmp(op, "AE") == 0){
			//Atribuir um elemento a uma matriz

			scanf("%s",nomeMatriz);
			scanf("%i %i", &dimensaoI, &dimensaoJ);
			scanf("%f", &valor);
			if(!AtribuirElemento (&inicio, nomeMatriz, dimensaoI, dimensaoJ, valor))
				printf("ERRO\n");

		}else if(strcmp(op, "AL") == 0){
			//Atribuir uma linha a uma matriz
			i = 0;

			scanf("%s",nomeMatriz);
			scanf("%i", &dimensaoI);

			while(scanf("%f", &valores[i]))
			{
				i++;	
			}

			if(!AtribuirLinha (&inicio, nomeMatriz, dimensaoI, valores, i))
				printf("ERRO\n");
			
		}else if(strcmp(op, "AC") == 0){
			//Atribuir uma coluna a uma matriz
			i = 0;

			scanf("%s",nomeMatriz);
			scanf("%i", &dimensaoJ);

			while(scanf("%f", &valores[i]))
			{
				i++;	
			}

			if(!AtribuirColuna (&inicio, nomeMatriz, dimensaoJ, valores, i))
				printf("ERRO\n");

		}else if(strcmp(op, "TM") == 0){
			//Transpor uma matriz
			scanf("%s %s", nomeMatriz, matrizResultante);
			if (!TransporMatriz(&inicio, nomeMatriz, matrizResultante)) printf("ERRO\n");

		}else if(strcmp(op, "SM") == 0){
			//Somar duas matrizes
			scanf("%s",nomeMatriz);
			scanf("%s",nomeMatriz_2);
			scanf("%s",matrizResultante);

			if(!SomaMatriz(&inicio, nomeMatriz, nomeMatriz_2, matrizResultante)) printf("ERRO\n");

		}else if(strcmp(op, "DV") == 0){
			//Dividir uma matriz por outra (elemento a elemento)
			scanf("%s",nomeMatriz);
			scanf("%s",nomeMatriz_2);
			scanf("%s",matrizResultante);

			if(!DivideMatrizElemento(&inicio, nomeMatriz, nomeMatriz_2, matrizResultante)) printf("ERRO\n");

		}else if(strcmp(op, "MM") == 0){
			//Multiplicar uma matriz por outra
			scanf("%s",nomeMatriz);
			scanf("%s",nomeMatriz_2);
			scanf("%s",matrizResultante);

			if(!MultiplicaMatriz(&inicio, nomeMatriz, nomeMatriz_2, matrizResultante)) printf("ERRO\n");

		}else if(strcmp(op, "ME") == 0){
			//Multiplicar duas matrizes (elemento a elemento)
			scanf("%s",nomeMatriz);
			scanf("%s",nomeMatriz_2);
			scanf("%s",matrizResultante);

			if(!MultiplicaMatrizElemento(&inicio, nomeMatriz, nomeMatriz_2, matrizResultante)) printf("ERRO\n");

		}


	}while (strcmp(op, "FE") != 0);

	return 0;

}


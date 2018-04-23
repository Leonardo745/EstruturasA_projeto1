//Header das funções de lista

typedef struct tLista lista;

struct tLista
{
	char nome[20];
	int **pMatriz, dimensaoI, dimensaoJ;
	lista  *prox;
};








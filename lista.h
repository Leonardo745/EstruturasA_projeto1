//Header das funções de lista
typedef struct tLista lista;

struct tLista
{
	char nome[20];
	int dimensaoI, dimensaoJ;
	float **pMatriz;
	lista  *prox;
};

lista *AcharNome(lista *inicio, char nome[]);
lista *AcharFim(lista *inicio);


//Funções que modificam a lista
#include <stdio.h>
#include <string.h>
#include "lista.h"

lista *AcharNome(lista *inicio, char nome[]){	
		
	if(!inicio) return NULL;
	while(inicio->prox && strcmp(inicio->nome, nome) != 0){
			inicio = inicio->prox;
		}
	if(strcmp(inicio->nome, nome) != 0) return NULL;
	return inicio;
}

lista *AcharFim(lista *inicio){
	if(!inicio) return NULL;
	if(!inicio->prox) return inicio;
	return AcharFim(inicio->prox);
}
//Header das funções de matrizes

typedef struct tLista lista;

int DeclaraMatriz(lista **inicio, char nomeMatriz[], int dimensaoI, int dimensaoJ);
int ImprimirMatriz(char nome[], lista **inicio);
int TransporMatriz (lista **inicio, char nomeMatriz[], char matrizResultante[]);
int AtribuirElemento (lista **inicio, char nomeMatriz[], int dimensaoI, int dimensaoJ, int valor);
int AtribuirLinha (lista **inicio, char nomeMatriz[], int dimensaoI, int valores[], int quant);
int AtribuirColuna (lista **inicio, char nomeMatriz[], int dimensaoJ, int valores[], int quant);
int MultiplicaMatrizElemento (lista **inicio, char nomeMatriz[], char nomeMatriz_2[], char nomeResultante[]);
int MultiplicaMatriz (lista **inicio, char nomeMatriz[], char nomeMatriz_2[], char nomeResultante[]);
int SomaMatriz (lista **inicio, char nomeMatriz[], char nomeMatriz_2[], char nomeResultante[]);
int DivideMatrizElemento (lista **inicio, char nomeMatriz[], char nomeMatriz_2[], char nomeResultante[]);



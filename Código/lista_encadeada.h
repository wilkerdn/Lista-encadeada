#include <stdlib.h>
#include <stdio.h>

typedef struct elemento {
	int valor;
	struct elemento *proximo;
} Elemento;

typedef struct lista{
  Elemento *comeco;	
} Lista;

Lista* criaLista();
void liberaLista(Lista* l);
int estahVazia(Lista* l);
int estahCheia(Elemento* elem);
int inserirPosicao(Lista* l, int posicao, int v);
int removerPosicao(Lista* l, int posicao, int* v);
void mostrarLista(Lista* l);
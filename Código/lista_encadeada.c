#include "lista_encadeada.h"

Lista* criaLista() {
	Lista* l;
	l = malloc(sizeof(Lista));
	l->comeco = NULL;
	return l;	
}

void liberaLista(Lista* l) {
	free(l);
	l->comeco = NULL;
}

int estahVazia(Lista* l) {
	if(l->comeco == NULL){
		return 1;
	}else{
		return 0;
	}
}

int estahCheia(Elemento* elem) {
	if (elem == NULL){
	   return 1;
	}else{
	   return 0;
	}
}

int inserirPosicao(Lista* l, int posicao, int v) {
	Elemento* novo = malloc(sizeof(Elemento));
	Elemento* temp;
	int i;
	novo->valor = v;
	if(estahVazia(l)==1){
		novo->proximo = l->comeco;
		l->comeco = novo;
		return 1;
	}else if(estahVazia(l)!=1){
		temp = l->comeco;
		for(i=1;i<posicao;i++){
			if(temp->proximo==NULL){
			break;
			}else
			temp = temp->proximo;
		}

		novo->proximo = temp->proximo;
		temp->proximo = novo;
		
		return 1;
	}else{
		return 0;
	}

}

int removerPosicao(Lista* l, int posicao, int* v) {
	Elemento *temp;
	Elemento *excluir;
	int i;

	if(estahVazia(l)!=1){
		temp = l->comeco;
		for(i=1;i<posicao;i++){
			if(temp->proximo==NULL){
			break;
			}else
			temp = temp->proximo;
		}
		excluir = temp->proximo;
		*v = excluir->valor;
		temp->proximo = excluir->proximo;
		free(excluir);
		return 1;
	}else
		return 0;
}

void mostrarLista(Lista* l) {
	Elemento *temp;
	for(temp=l->comeco;temp!=NULL;temp=temp->proximo){
	printf("%d ",temp->valor);
	}
	printf("\n");
}
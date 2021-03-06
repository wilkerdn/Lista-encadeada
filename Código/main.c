#include "lista_encadeada.h"

int main(int argc, char** argv){	
	Lista* l;
	int removido;
	
	l = criaLista();
	
	inserirPosicao(l, 0, 0);
	inserirPosicao(l, 1, 2);
	inserirPosicao(l, 2, 3);
	
	removerPosicao(l, 1, &removido);
	
	printf("%d removido da Lista\n",removido);
	
	inserirPosicao(l, 1, 1);
	
	mostrarLista(l);
	
	liberaLista(l);

	return 0;
}

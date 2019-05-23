//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Constantes

#define tamanho 5

typedef struct t_processo {
	char nome[10];
	int PID;
}t_processo;

//Estrutura da Pilha
typedef struct tpilha {
	t_processo dados [tamanho];
	int ini;
	int fim;
}tpilha;

tpilha pilha;

int op;

int main (){
	setlocale (LC_ALL, "Portuguese");
	t_processo processo;
	op = 1;
	processo.PID;
	 
	pilha.ini = 0;
	pilha.fim = 0;
	while (op != 0) {
		system("cls");
		printf ("\nEscolha uma opção no menu: ");
		printf ("\n\n1 - Inserir um elemento a pilha: ");
		printf ("\n2 - Remover um elemento da pilha: ");
		printf ("\n3 - Esvaziar a pilha: ");
		printf ("\n0 - Encerrar o programa\n\n");
		scanf ("%d", &op);
		setbuf(stdin, NULL);
		
		system ("pause");
		
		switch (op){
			case 1:
				if (pilha.fim == tamanho){
				printf ("\nPilha cheia, impossível empilhar mais elementos!\n\n");
				system("pause");
		
			}
	
			else{
				printf("\nInserir um elemento na pilha: ");
				scanf("%s", pilha.dados[pilha.ini].PID, pilha.dados[pilha.ini].nome);
				setbuf(stdin, NULL);
				system ("pause");
				pilha.fim++;
	 	}
			break;
		}
	}
	return (0);
}

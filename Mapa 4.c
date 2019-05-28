//Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

//Constantes

#define tamanho 5

typedef struct t_processo {
	char nome[10];
	int cod; // esse pid a gente vai fazer ele gerar dentro do laco de repeticao for.. ok
}t_processo; /// ok

//Estrutura da Pilha
typedef struct tpilha { // onde esta o erro..
	t_processo dados [tamanho];
	int ini;
	int fim;
}tpilha; // ok

//Variáveis globais
tpilha pilha;
int op;
t_processo dados;



//Prototipação

void pilha_inserir(); 
void pilha_remover();
void pilha_esvaziar();
void pilha_mostrar();
void menu_mostrar();


//função principal

int main (){
	setlocale(LC_ALL, "Portuguese");
	op = 1; 
	pilha.ini = 0;
	pilha.fim = 0;
	while (op != 0){
		system("cls");
		if(pilha.ini==pilha.fim){
			printf("PILHA VAZIA\n");
		}
		else{
			pilha_mostrar();
		}		
		menu_mostrar(); 
		scanf("%d", &op);
		
		
		//setbuf(stdin,NULL);  
		switch (op){
			case 1:
				pilha_inserir();
			break;
			case 2:
				pilha_remover();
			break;
			case 3:
				pilha_esvaziar();				
			break;
			case 0:
				system("cls");
				printf("Programa encerrado!");
			break;
		
		default:
			printf("Opção Inválida\n\n");
			system("pause");
		}
		
		
	}
	return (0);
}

// Adicionar um elemento no final da Pilha

void pilha_inserir(){
	if (pilha.fim == tamanho){
		printf ("\nPilha cheia, impossível empilhar mais elementos!\n\n");
		system("pause");
		
	}	
	else{
		printf("\nInserir um elemento na pilha: ");
		scanf("%s",&dados.nome);
		//setbuf(stdin,NULL);
		
		pilha.dados[pilha.fim] = dados;			 	
		pilha.fim++;
		system ("pause"); 
	
	}
}

//Retirar o último elemento da Pilha
pilha_remover() {
	if (pilha.ini == pilha.fim) {
		printf("\nA pilha está vazia, impossível desempilhar!\n\n");
		system ("pause");
		
	}
	else {
		pilha.dados[pilha.fim-1];
		pilha.fim--;
	}
}
pilha_esvaziar(){
	pilha.fim = 0;
	printf("pilha vazia\n\n");
	system("pause");

}

//Mostrar o conteúdo da Pilha

pilha_mostrar(){
	int i= 0;
	if (pilha.fim >=0){
		printf("Pid   nome  depois vc coloca como vc quiser");
		for(i = pilha.ini;i<pilha.fim; i++){// aqui vai ser onde o PID vai fazer a bagunca...Por isso estava dando erro? um pouco sim..
			printf("\n%d ",i); // esse e o numero do PID que vai gerar..
			printf("%s		",pilha.dados[i].nome);
			if(pilha.ini == i){
				printf("< === Base "); 
			}
			if(pilha.fim-1 ==i){
				printf("< === Topo ");
			}
			printf("\n");
		}
			printf("\n");		
	}

	
}

//Mostrar o menu de opções
menu_mostrar() {
	printf("\nEscolha uma opção: \n");
	printf("1 - Inserir um elemento a pilha \n");
	printf("2 - Remover um elemento da pilha\n");
	printf("3 - Esvaziar a pilha\n");
	printf("0 - Encerrar o programa\n\n");
}

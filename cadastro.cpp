#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define SIZE 200
char nome [SIZE][50];
char email[SIZE][50];
int cpf[SIZE];
int op;
void cadastro();
void pesquisa();
void lista();

int main(void){

     do{
     	system("cls");
     	printf("\n ----Menu----\n 1 - Cadastrar \n 2 - Listar Todos \n 3 - Pesquisar \n 4 - Sair");
     	scanf("%d", &op);
     	switch(op){
     		
     		case 1:
     			cadastro();
     			break;
     		case 2: 
     		    lista();
			    break;
			case 3:
				pesquisa();
			    break;
			case 4: 
			    system("exit");
			    break;
			default:
			printf("Opcao invalida");
			break;		
		 }
     	
	 }while(op!=4);

}
void lista(){
	int i;
	for(i=0;i<SIZE;i++){
					if(cpf[i]>0){
						printf("\n Nome: %s \n Email: %s \n CPF: %d", nome [i], email[i]);
		}
    }
    	getchar();
		getchar();
}
void cadastro(){
	
    static int linha;

    do{
        printf("\n Digite o nome: ");
        scanf("%s", &nome[linha]);
        printf("\n Digite o e-mail: ");
        scanf("%s", &email[linha]);
        printf("\n Digite o cpf: ");
        scanf("%d", &cpf[linha]);
        printf("\n Digite 1 para continuar ou outro valor para sair ");
        scanf("%d", &op);
        linha++;

    }while(op==1);
}

void pesquisa(){
	int cpfPesquisa;
	char emailPesquisa[50];
	int i;
	
	do{
	    printf("\n Digite 1 para pesquisar por CPF ou 2 para pesquisar por email");
		scanf("%d", &op);
		switch(op){
			case 1:
				printf("\n Digite o CPF: ");
				scanf("%d", &cpfPesquisa);
				for(i=0;i<SIZE;i++){
					if(cpf[i]==cpfPesquisa){
						printf("\n Nome: %s \n Email: %s \n CPF: %d", nome [i], email[i]);
					}
				}
				 break;
			case 2:	
			    printf("\n Digite o E-mail");
				scanf("%s", emailPesquisa);
				for(i=0;i<SIZE;i++){
					if(strcmp(email[i], emailPesquisa)==0){
						printf("\n Nome: %s\n Email: %s\n CPF: %d", nome [i], email[i]);
					}
				}
			     break;
			default:
			    printf("\n Opcao invalida");
			     break;
			
		}
		printf("\n Digite 1 para continuar pesquisando ");
		scanf("%d", &op);
	}while(op==1);
}


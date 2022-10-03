/*
 Author: Mateus Pontes
 Date: 01/Octuber/2022 
 Hour:19:00
 Project:Program that simulates a cafeteria.
*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>

int codprod, op, op2, qtd, qtdref, qtdsobre;
char *descricao, *descrrefre, *descrsobre;
float valor, valortotal, valorsobre,valorrefre,totalGeral;
 struct produto
 {
    char descricao, descrerefri,descrsobre;
    float valor, valortotal,valorsobre, valorrefri,total;
 };
 void MenuPrincipal (){
   printf("|===========================================|\n");
   printf("|             STARBUCKS CAFETERIA           |\n");
   printf("|===========================================|\n");
   printf("|    1-Fazer pedido   |  2-Imprimir Cupom   |\n");
   printf("|===========================================|\n");
   printf("|    3-Alterar Pedido |  4-Consultar        |\n");
   printf("|===========================================|\n");
   printf("Selecione a opção desejada ou 5 para sair \n");
   scanf("%d",&op2);
   system("cls");
 }
void bebidas(){
	
	printf(" ==================================\n");
	printf("|   ESCOLHA SUA BEBIDA DESEJADO    |\n");
	printf("|----------------------------------|\n");
	printf("|codigo   | Descri��o    | Valor   |\n");
	printf("|----------------------------------|\n");
	printf("|   1     |     Suco     | 6.00    |\n");
	printf("|----------------------------------|\n");
	printf("|   2     | Refrigerante | 5.50    |\n");
	printf("|----------------------------------|\n");
	printf("|   3     |     Agua     | 3.00    |\n");
	printf(" ==================================\n");
	printf("informe o codigo dp produto \n");
	scanf("%d",&codprod);
	switch(codprod){
		case 1:{
			descricao="Suco";
			valor = 6.00;
			printf("informe a quantidade \n");
			scanf("%d",&qtd);
			break;
		}
		case 2:{
			descricao="Refrigerante";
			valor=5.50;
			printf("informe a quantidade \n");
			scanf("%d",&qtd);
			break;
		}
		case 3:{
			descricao="Agua";
			valor=3.00;
			printf("informe a quantidade \n");
			scanf("%d",&qtd);
			break;
		}
		
	}
}


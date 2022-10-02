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

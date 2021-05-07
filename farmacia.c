//#include <ctype.h>
//#include <stdbool.h> --> usar bools
#include <stdio.h>
#include <conio.h>

#pragma region Cores
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"
#pragma endregion

//funções reutilizaveis
#pragma region Funcoes
void nome_programa(){printf(YELLOW ">=Farmacia Toze=<\n\n" RESET);}
void input_invalido(){printf(RED "Erro. Introduza um valor valido.\n" RESET);}
void sair(){printf(YELLOW "Volte sempre!" RESET);}
void voltar(){printf(YELLOW "A voltar..." RESET);}

#pragma endregion

#pragma region Menus

#pragma region Main
int main(void)
{
     char escolhastr[3];
     int escolha;
do
{
     system("cls");
     nome_programa();
     printf(GREEN"======Menu======\n\n"RESET);
     printf(" 1. Clientes\n");
     printf(" 2. Medicamentos\n");
     printf(" 3. Vendas\n\n");
     printf(GREEN"================\n\n"RESET);
     printf(" 9." RED " Sair\n\n" RESET);
     printf(GREEN"================\n"RESET);
     scanf("%s",&escolhastr);

     escolha = atoi(escolhastr);

     switch (escolha)
     {
     case 1: clientes();
               break;
     case 2: medicamentos();
               break;
     case 3: vendas();
               break;
     case 9: sair();
               break;
     default: input_invalido();
              sleep(1);
               break;
     }
} while (escolha != 9);
}
#pragma endregion

#pragma region Menu Clientes
void clientes() {

    char escolhastr[3];
     int escolha;
do
{
     system("cls");
     nome_programa();
     printf(GREEN"======Clientes======\n\n"RESET);
     printf(" 1. Criar Cliente\n");
     printf(" 2. Editar Cliente\n");
     printf(" 3. Eliminar Cliente\n\n");
     printf(GREEN"====================\n\n"RESET);
     printf(" 4." GREEN " <<" YELLOW " Voltar\n\n" RESET);
     printf(GREEN"====================\n"RESET);
     scanf("%s",&escolhastr);

     escolha = atoi(escolhastr);

     switch (escolha)
     {
     case 1:criar_cliente();
            sleep(1);
               break;
     case 2:
          printf("Editar\n\n");
          sleep(1);
               break;
     case 3:
          printf("Eliminar\n\n");
          sleep(1);
                break;
     case 4: voltar();        
          break;
          default: input_invalido();
          sleep(1);
               break;
     }
     } while (escolha != 4);

}
#pragma endregion

#pragma region Menu Medicamentos
void medicamentos() {

    char escolhastr[3];
     int escolha;
do
{
     system("cls");
     nome_programa();
     printf(GREEN"======Medicamentos======\n\n"RESET);
     printf(" 1. Criar Medicamento\n");
     printf(" 2. Editar Medicamento\n");
     printf(" 3. Eliminar Medicamento\n\n");
     printf(GREEN"========================\n\n"RESET);
     printf(" 4." GREEN " <<" YELLOW " Voltar\n\n" RESET);
     printf(GREEN"========================\n"RESET);
     scanf("%s",&escolhastr);

     escolha = atoi(escolhastr);

     switch (escolha)
     {
     case 1:
          printf("Criar\n\n");
          sleep(1);
               break;
     case 2:
          printf("Editar\n\n");
          sleep(1);
               break;
     case 3:
          printf("Eliminar\n\n");
          sleep(1);
                break;
     case 4: voltar();
          break;
          default: input_invalido();
          sleep(1);
               break;
     }
     } while (escolha != 4);

}
#pragma endregion

#pragma region Menu Vendas
void vendas() {

    char escolhastr[3];
     int escolha;
do
{
     system("cls");
     nome_programa();
     printf(GREEN"======Vendas======\n\n"RESET);
     printf(" 1. Criar Venda\n");
     printf(" 2. Editar Venda\n");
     printf(" 3. Eliminar Venda\n\n");
     printf(GREEN"====================\n\n"RESET);
     printf(" 4." GREEN " <<" YELLOW " Voltar\n\n" RESET);
     printf(GREEN"====================\n"RESET);
     scanf("%s",&escolhastr);

     escolha = atoi(escolhastr);

     switch (escolha)
     {
     case 1:
          printf("Criar\n\n");
          sleep(1);
               break;
     case 2:
          printf("Editar\n\n");
          sleep(1);
               break;
     case 3:
          printf("Eliminar\n\n");
          sleep(1);
                break;
     case 4: voltar();
          break;
          default: input_invalido();
          sleep(1);
               break;
     }
     } while (escolha != 4);

}
#pragma endregion

#pragma endregion

#pragma region Metodos Menu Cliente
void criar_cliente(){
     char nome_cliente[256];
     printf("Insira o nome do cliente que pretende adicionar: \n");
     scanf("%s", nome_cliente);

     printf("Nome inserido: %s", nome_cliente);
}
#pragma endregion
//#include <ctype.h>
//#include <stdbool.h> --> usar bools
#include <stdio.h>
#include <conio.h>
//#include <windows.h>

//Cores
#pragma region Cores
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"
#pragma endregion

//Variaveis globais
#pragma region  Variaveis Globais
char nome_ficheiro[100];
char cliente[100] = "Cliente";
char medicamento[100] = "Medicamento";
int limite = 9999;
#pragma endregion

//funções reutilizaveis
#pragma region Funcoes
void nome_programa(){printf(YELLOW ">=Farmacia Toze=<\n\n" RESET);}
void input_invalido(){printf(RED "Erro. Introduza um valor valido.\n" RESET);}
void sucesso(){printf(GREEN"Efetuado com sucesso."RESET);}
void sair(){printf(YELLOW "\nVolte sempre!\n" RESET);}
void voltar(){printf(YELLOW "A voltar..." RESET);}
void clear(){ system("cls");}
void discard(){scanf("%*c");}
void escolher(){printf(CYAN"\nEscolha: "RESET);}
//void messagebox(){MessageBox(NULL, TEXT("Mensagem"),TEXT("Console Error"), MB_OK);}  se quiser uma messagebox
#pragma endregion
//Menus
#pragma region Menus

#pragma region Main
int main(void)
{
     char escolhastr[3];
     int escolha;

do
{
     clear();
     nome_programa();
     printf(GREEN"======Menu======\n\n"RESET);
     printf(" 1. Clientes\n");
     printf(" 2. Medicamentos\n");
     printf(" 3. Vendas\n");
     printf(" 4. Fornecedores\n\n");
     printf(GREEN"================\n\n"RESET);
     printf(" 9." RED " Sair\n\n" RESET);
     printf(GREEN"================\n"RESET);
     escolher();
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
     case 4: fornecedores();
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

#pragma region Fornecedores
void fornecedores(){
     char escolhastr[3];
     int escolha;
do
{
     clear();
     nome_programa();
     printf(GREEN"======Fornecedores======\n\n"RESET);
     printf(" 1. Criar Fornecedor\n");
     printf(" 2. Editar Fornecedor\n");
     printf(" 3. Eliminar Fornecedor\n\n");
     printf(GREEN"========================\n\n"RESET);
     printf(" 9." GREEN " <<" YELLOW " Voltar\n\n" RESET);
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
     case 9: voltar();
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
     clear();
     nome_programa();
     printf(GREEN"======Clientes======\n\n"RESET);
     printf(" 1. Criar Cliente\n");
     printf(" 2. Editar Cliente\n");
     printf(" 3. Listar Clientes\n\n");
     printf(GREEN"====================\n\n"RESET);
     printf(" 9." GREEN " <<" YELLOW " Voltar\n\n" RESET);
     printf(GREEN"====================\n"RESET);
     scanf("%s",&escolhastr);

     escolha = atoi(escolhastr);

     switch (escolha)
     {
     case 1:criar_cliente();
            sleep(1);
               break;
     case 2: editar_cliente();
             getch();
               break;
     case 3:
          listar_cliente();
          getch();
                break;
     case 9: voltar();        
          break;
          default: input_invalido();
          sleep(1);
               break;
     }
     } while (escolha != 9);

}
#pragma endregion

#pragma region Menu Medicamentos
void medicamentos() {

    char escolhastr[3];
     int escolha;
do
{
     clear();
     nome_programa();
     printf(GREEN"======Medicamentos======\n\n"RESET);
     printf(" 1. Criar Medicamento\n");
     printf(" 2. Editar Medicamento\n");
     printf(" 3. Listar Medicamentos\n\n");
     printf(GREEN"========================\n\n"RESET);
     printf(" 9." GREEN " <<" YELLOW " Voltar\n\n" RESET);
     printf(GREEN"========================\n"RESET);
     scanf("%s",&escolhastr);

     escolha = atoi(escolhastr);

     switch (escolha)
     {
     case 1:
          criar_medicamento();
          sleep(1);
               break;
     case 2:
          editar_medicamento();
          getch();
               break;
     case 3:
          listar_medicamentos();
          getch();
                break;
     case 9: voltar();
          break;
          default: input_invalido();
          sleep(1);
               break;
     }
     } while (escolha != 9);

}
#pragma endregion

#pragma region Menu Vendas
void vendas() {

    char escolhastr[3];
     int escolha;
do
{
     clear();
     nome_programa();
     printf(GREEN"======Vendas======\n\n"RESET);
     printf(" 1. Criar Venda\n");
     printf(" 2. Editar Venda\n");
     printf(" 3. Eliminar Venda\n\n");
     printf(GREEN"====================\n\n"RESET);
     printf(" 9." GREEN " <<" YELLOW " Voltar\n\n" RESET);
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
     case 9: voltar();
          break;
          default: input_invalido();
          sleep(1);
               break;
     }
     } while (escolha != 9);

}
#pragma endregion

#pragma endregion
//Metodos
#pragma region Metodos

#pragma region Metodos Menu Cliente

float verificar_id(){
     FILE *TXT;
     for (float i = 1; i < limite; i++)
     {
          sprintf(nome_ficheiro, "%s%03.0f.txt", cliente, i);
          if ((TXT = fopen(nome_ficheiro, "r")) == NULL)
          {
               fclose(TXT);
               return i;
          }
     }
}

void criar_cliente(){

     clear();
     float i;

     //verificar os ficheiros existentes
     i = verificar_id();

     //Pedir nome do cliente
     char nome_cliente[256];
     printf("\tInsira o nome do cliente que pretende adicionar: \n\n");
     printf(CYAN"Nome Cliente: "RESET);
     discard();
     fgets(nome_cliente, 100, stdin);
     //scanf("%s", nome_cliente);

     //Abrir ficheiro
     FILE *ficheiro;

     //criar nome do ficheiro/concatenar
     sprintf(nome_ficheiro, "%s%03.0f.txt", cliente, i);
     printf(YELLOW"\n==============================="RESET);
     printf("\nFicheiro Criado: ");
     printf(GREEN "%s" RESET, nome_ficheiro);
      
      //Escrever para o ficheiro
     ficheiro = fopen(nome_ficheiro, "w");

     fprintf(ficheiro,"ID:%.0f\nNome:%s",i, nome_cliente);  
     fclose(ficheiro);

     printf("\nCliente inserido: " RESET);
     printf(GREEN "%s" RESET, nome_cliente);
     printf(YELLOW"\n==============================="RESET);
     sleep(1);
}

void listar_cliente(){

     clear();
     char linha[100];
     char *result;
     FILE *TXT;
     printf(CYAN"Lista de Clientes:\n"RESET);
     printf(YELLOW"===============================\n"RESET);
    for (float i = 1; i < limite; i++)
    {
      sprintf(nome_ficheiro, "%s%03.0f.txt", cliente, i);

      if ((TXT = fopen(nome_ficheiro,"r")) != NULL){
               while (!feof(TXT))
               {
                    result = fgets(linha, 100, TXT);
                    if(result)
                         printf(GREEN"----> "RESET "%s", linha);
                }
               printf(YELLOW"\n===============================\n"RESET);
         fclose(TXT);
      }else
      {
          return;
      }
    }
}

void editar_cliente(){
     float i;
     FILE *TXT;
     char nome_cliente[256];
     listar_cliente();

     printf(CYAN"\nInsira o ID do cliente que pretende editar:\n"RESET);
     scanf("%f", &i);

     sprintf(nome_ficheiro, "%s%03.0f.txt", cliente, i);

      if ((TXT = fopen(nome_ficheiro,"r")) == NULL)
      return input_invalido();

     printf(CYAN"\nInsira um novo nome:\n"RESET);
     scanf("%s", nome_cliente);

     TXT = fopen(nome_ficheiro,"w");

     fprintf(TXT,"ID:%.0f\nNome:%s",i, nome_cliente);  
     fclose(TXT);
     printf("\n");
     sucesso();

     
};
#pragma endregion

#pragma region Metodos Menu Cliente
float id_medicamento(){
     FILE *TXT;
     for (float i = 1; i < limite; i++)
     {
          sprintf(nome_ficheiro, "%s%03.0f.txt", medicamento, i);
          if ((TXT = fopen(nome_ficheiro, "r")) == NULL)
          {
               fclose(TXT);
               return i;
          }
     }
}

void criar_medicamento(){

     clear();
     float i;

     //verificar os ficheiros existentes
     i = id_medicamento();

     //Pedir nome do cliente
     char nome_medicamento[256];
     printf("\tInsira o nome do medicamento que pretende adicionar: \n\n");
     printf(CYAN"Nome Medicamento: "RESET);
     discard();
     fgets(nome_medicamento, 100, stdin);


     //Abrir ficheiro
     FILE *ficheiro;

     //criar nome do ficheiro/concatenar
     sprintf(nome_ficheiro, "%s%03.0f.txt", medicamento, i);
     printf(YELLOW"\n==============================="RESET);
     printf("\nFicheiro Criado: ");
     printf(GREEN "%s" RESET, nome_ficheiro);
      
      //Escrever para o ficheiro
     ficheiro = fopen(nome_ficheiro, "w");

     fprintf(ficheiro,"ID:%.0f\nNome Medicamento:%s",i, nome_medicamento);  
     fclose(ficheiro);

     printf("\nMedicamento inserido: " RESET);
     printf(GREEN "%s" RESET, nome_medicamento);
     printf(YELLOW"\n==============================="RESET);
     sleep(1);
}

void listar_medicamentos(){

     clear();
     char linha[100];
     char *result;
     FILE *TXT;
     printf(CYAN"Lista de Medicamentos:\n"RESET);
     printf(YELLOW"===============================\n"RESET);
    for (float i = 1; i < limite; i++)
    {
      sprintf(nome_ficheiro, "%s%03.0f.txt", medicamento, i);

      if ((TXT = fopen(nome_ficheiro,"r")) != NULL){
               while (!feof(TXT))
               {
                    result = fgets(linha, 100, TXT);
                    if(result)
                         printf(GREEN"----> "RESET "%s", linha);
                }
               printf(YELLOW"\n===============================\n"RESET);
         fclose(TXT);
      }else
      {
          return;
      }
    }
}

void editar_medicamento(){
     float i;
     FILE *TXT;
     char nome_medicamento[256];
     listar_medicamentos();

     printf(CYAN"\nInsira o ID do medicamento que pretende editar:\n"RESET);
     scanf("%f", &i);

     sprintf(nome_ficheiro, "%s%03.0f.txt", medicamento, i);

      if ((TXT = fopen(nome_ficheiro,"r")) == NULL)
      return input_invalido();

     printf(CYAN"\nInsira um novo nome:\n"RESET);
     scanf("%s", nome_medicamento);

     TXT = fopen(nome_ficheiro,"w");

     fprintf(TXT,"ID:%.0f\nNome:%s",i, nome_medicamento);  
     fclose(TXT);
     printf("\n");
     sucesso();

     
};
#pragma endregion

#pragma endregion

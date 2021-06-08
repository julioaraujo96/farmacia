//#include <ctype.h>
//#include <stdbool.h> --> usar bools
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
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
char fornecedor[100] = "Fornecedor";
char venda[100] = "Vendas";
int limite = 9999;
int clienteadd = 0;
char linerc1[100],linerc2[100],linerm1[100],linerm2[100];
char linerc11[100], linerc22[100], linerm11[100], linerm22[100];
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
     printf(" 3. Listar Fornecedores\n\n");
     printf(GREEN"========================\n\n"RESET);
     printf(" 9." GREEN " <<" YELLOW " Voltar\n\n" RESET);
     printf(GREEN"========================\n"RESET);
     scanf("%s",&escolhastr);

     escolha = atoi(escolhastr);

     switch (escolha)
     {
     case 1:
          criar_fornecedor();
          sleep(1);
               break;
     case 2:
          editar_fornecedor();
          sleep(1);
               break;
     case 3:
          listar_fornecedores();
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
     printf(" 3. Listar Venda\n\n");
     printf(GREEN"====================\n\n"RESET);
     printf(" 9." GREEN " <<" YELLOW " Voltar\n\n" RESET);
     printf(GREEN"====================\n"RESET);
     scanf("%s",&escolhastr);

     escolha = atoi(escolhastr);

     switch (escolha)
     {
     case 1:
          criar_venda();
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
     int nif_cliente, telemovel;

     printf("\tInsira os dados do cliente que pretende adicionar: \n\n");
     printf(CYAN"Nome Cliente: "RESET);
     discard();
     fgets(nome_cliente, 100, stdin);

     printf(CYAN"NIF: "RESET);
     scanf("%d", &nif_cliente);

     printf(CYAN"Telemovel: "RESET);
     scanf("%d", &telemovel);
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
     fprintf(ficheiro,"NIF:%d", nif_cliente);
     fprintf(ficheiro,"\nTelemovel:%d", telemovel);
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
     int nif_cliente, telemovel;
     listar_cliente();



     printf(CYAN"\nInsira o ID do cliente que pretende editar:\n"RESET);
     scanf("%f", &i);

     sprintf(nome_ficheiro, "%s%03.0f.txt", cliente, i);

      if ((TXT = fopen(nome_ficheiro,"r")) == NULL)
      return input_invalido();

     printf(CYAN"\nInsira um novo nome:\n"RESET);
     discard();
     fgets(nome_cliente, 100, stdin);

     printf(CYAN"\nInsira um novo nif:\n"RESET);
     scanf("%d", &nif_cliente);

     printf(CYAN"\nInsira um novo telemovel:\n"RESET);
     scanf("%d", &telemovel);


     TXT = fopen(nome_ficheiro,"w");

     fprintf(TXT,"ID:%.0f\nNome:%sNIF:%d\nTelemovel:%d",i, nome_cliente,nif_cliente,telemovel);
     fclose(TXT);
     printf("\n");
     sucesso();


};
#pragma endregion

#pragma region Metodos Menu Medicamento
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
     float i, id_f;
    FILE *TXT;
     //verificar os ficheiros existentes
     i = id_medicamento();

     //Pedir nome do cliente
     char nome_medicamento[256];
     int preco;
     printf("\tInsira os dados do medicamento que pretende adicionar: \n\n");
     printf(CYAN"Nome Medicamento: "RESET);
     discard();
     fgets(nome_medicamento, 100, stdin);

     printf(CYAN"\nPreco: "RESET);
     scanf("%d", &preco);

     listar_fornecedores();

     printf("Qual o ID do fornecedor?");
     scanf("%f", &id_f);

     sprintf(nome_ficheiro, "%s%03.0f.txt", fornecedor, id_f);

      if ((TXT = fopen(nome_ficheiro,"r")) == NULL)
      return input_invalido();

     char liner[100];
     int found = 0;
     int line = 1;
        while(fgets(liner,100,TXT))
      {
                                  if(line == 2)
                                  {
                                                found = 1;

                                  }

                                  line++;

      }

      if (found == 0)
      {

                printf("erro");

      }

      line = line - 1;
      //printf("\nthis file has: %d lines",line);



     fclose(TXT);
     printf("\n");
     sucesso();



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
     fprintf(ficheiro,"Preco:\n%d\n", preco);
     fprintf(ficheiro, liner);


     fclose(ficheiro);

     printf("\nMedicamento inserido: " RESET);
     printf(GREEN "%s" RESET, nome_medicamento);
     printf(YELLOW"\n==============================="RESET);
     sleep(2);
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
     discard();
     fgets(nome_medicamento, 100, stdin);

     TXT = fopen(nome_ficheiro,"w");

     fprintf(TXT,"ID:%.0f\nNome:%s",i, nome_medicamento);
     fclose(TXT);
     printf("\n");
     sucesso();


};
#pragma endregion

#pragma region Metodos Menu Fornecedores
float id_fornecedor(){
     FILE *TXT;
     for (float i = 1; i < limite; i++)
     {
          sprintf(nome_ficheiro, "%s%03.0f.txt", fornecedor, i);
          if ((TXT = fopen(nome_ficheiro, "r")) == NULL)
          {
               fclose(TXT);
               return i;
          }
     }
}

void criar_fornecedor(){

     clear();
     float i;

     //verificar os ficheiros existentes
     i = id_fornecedor();

     //Pedir nome do cliente
     char nome_fornecedor[256];
     printf("\tInsira o nome do fornecedor que pretende adicionar: \n\n");
     printf(CYAN"Nome Medicamento: "RESET);
     discard();
     fgets(nome_fornecedor, 100, stdin);


     //Abrir ficheiro
     FILE *ficheiro;

     //criar nome do ficheiro/concatenar
     sprintf(nome_ficheiro, "%s%03.0f.txt", fornecedor, i);
     printf(YELLOW"\n==============================="RESET);
     printf("\nFicheiro Criado: ");
     printf(GREEN "%s" RESET, nome_ficheiro);

      //Escrever para o ficheiro
     ficheiro = fopen(nome_ficheiro, "w");

     fprintf(ficheiro,"ID:%.0f\nNome Fornecedor:%s",i, nome_fornecedor);
     fclose(ficheiro);

     printf("\nFornecedor inserido: " RESET);
     printf(GREEN "%s" RESET, nome_fornecedor);
     printf(YELLOW"\n==============================="RESET);
     sleep(1);
}

void listar_fornecedores(){

     clear();
     char linha[100];
     char *result;
     FILE *TXT;
     printf(CYAN"Lista de Fornecedores:\n"RESET);
     printf(YELLOW"===============================\n"RESET);
    for (float i = 1; i < limite; i++)
    {
      sprintf(nome_ficheiro, "%s%03.0f.txt", fornecedor, i);

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

void editar_fornecedor(){
     float i;
     FILE *TXT;
     char nome_fornecedor[256];
     listar_fornecedores();

     printf(CYAN"\nInsira o ID do fornecedor que pretende editar:\n"RESET);
     scanf("%f", &i);

     sprintf(nome_ficheiro, "%s%03.0f.txt", fornecedor, i);

      if ((TXT = fopen(nome_ficheiro,"r")) == NULL)
      return input_invalido();

     printf(CYAN"\nInsira um novo nome:\n"RESET);
     discard();
     fgets(nome_fornecedor, 100, stdin);

     TXT = fopen(nome_ficheiro,"w");

     fprintf(TXT,"ID:%.0f\nNome:%s",i, nome_fornecedor);
     fclose(TXT);
     printf("\n");
     sucesso();


}

float id_venda(){
     FILE *TXT;
     for (float i = 1; i < limite; i++)
     {
          sprintf(nome_ficheiro, "%s%03.0f.txt", venda, i);
          if ((TXT = fopen(nome_ficheiro, "r")) == NULL)
          {
               fclose(TXT);
               return i;
          }
     }
}


void criar_venda(){

     clear();
     float i, id_c, id_m;
    FILE *TXT;
     //verificar os ficheiros existentes
     i = id_venda();

     //Pedir nome do cliente
     char nome_venda[256];
     int qmed;
     int ii = 1;
      char *remaining;
      long linerm22L, precoT = 0;
     FILE *ficheiro;

     //criar nome do ficheiro/concatenar
     sprintf(nome_ficheiro, "%s%03.0f.txt", venda, i);
     printf(YELLOW"\n==============================="RESET);
     printf("\nFicheiro Criado: ");
     printf(GREEN "%s" RESET, nome_ficheiro);

      //Escrever para o ficheiro
     ficheiro = fopen(nome_ficheiro, "w");
     fprintf(ficheiro,"ID:%.0f\n",i);

         if (clienteadd == 0){
                clear();
          add_cliente();
          fprintf(ficheiro,linerc11,"\n");
     fprintf(ficheiro,linerc22,"\n");
          sleep(1);
          }
          else {
            printf("\nJa adicionou um cliente nesta venda.");
          }
          clear();
            printf("\nQuantos medicamentos quer adicionar a venda?");

            scanf("%d",&qmed);

            while (ii <= qmed){
        clear();
            printf("\nINSERE O MEDICAMENTO NUMERO %d",ii);
          add_medicamento();

          fprintf(ficheiro,linerm11);

          linerm22L = strtol(linerm22, &remaining,10);

          fprintf(ficheiro,"Preco Medicamento:%lde\n",linerm22L);


          precoT += linerm22L;

            ii++;
            sleep(1);

     }

            clear();

         clienteadd = 0;

          sleep(1);



     //Abrir ficheiro


     fprintf(ficheiro,"Preco Total:%lde", precoT);

     fclose(ficheiro);

     printf("\nVenda inserida: " RESET);
     printf(GREEN "ID:%.0f\n" RESET,i);
     printf(GREEN "Preco Total:%lde\n" RESET,precoT);
     printf(YELLOW"\n==============================="RESET);
     sleep(1);
}

void add_cliente(){
clear();
float i, id_c;
    FILE *TXT;

     i = id_venda();

     int found = 0, found2 = 0, found3 = 0;
     int line = 1,line2 = 1,line3 = 1 ;

     listar_cliente();
     printf("\tInsira quem esta a fazer a compra: \n\n");

     printf("Qual o ID do cliente?");
     scanf("%f", &id_c);

     sprintf(nome_ficheiro, "%s%03.0f.txt", cliente, id_c);

      if ((TXT = fopen(nome_ficheiro,"r")) == NULL)
      return input_invalido();



     //linha 2 (nome)
        while(fgets(linerc1,100,TXT))//read the file string by string
      {
                                  if(line == 2)
                                  {
                                                found = 1;


                                                strcpy(linerc11,linerc1);


                                  }


                                  line++;

      }

      if (found == 0)
      {

                printf("erro linerc1");

      }

      line = line - 1;
        fclose(TXT);
        printf("\n");
      //linha 3 (nif)
if ((TXT = fopen(nome_ficheiro,"r")) == NULL)
      return input_invalido();
      while(fgets(linerc2,100,TXT))//read the file string by string
      {
                                  if(line2 == 3)
                                  {
                                                found2 = 1;

                                                strcpy(linerc22,linerc2);


                                  }


                                  line2++;

      }

      if (found2 == 0)
      {

                printf("erro linerc2");

      }

      line2 = line2 - 1;




     fclose(TXT);
     printf("\n");
     clienteadd = 1;
     sucesso();

}

void add_medicamento(){

    float id_m;
    FILE *TXT;
     int found = 0, found2 = 0, found3 = 0;
     int line = 1,line2 = 1,line3 = 1 ;

     listar_medicamentos();

     printf("Qual o ID do medicamento que quer adicionar a venda?");
     scanf("%f", &id_m);

     sprintf(nome_ficheiro, "%s%03.0f.txt", medicamento, id_m);

      if ((TXT = fopen(nome_ficheiro,"r")) == NULL)
      return input_invalido();

//nome medicamento
        while(fgets(linerm1,100,TXT))
      {
                                  if(line == 2)
                                  {
                                                found = 1;
                                                strcpy(linerm11,linerm1);

                                  }


                                  line++;

      }

      if (found == 0)
      {

                printf("erro m1, and %s",linerm1);

      }

      line = line - 1;

        fclose(TXT);
        printf("\n");

     //preco medicamento
if ((TXT = fopen(nome_ficheiro,"r")) == NULL)
      return input_invalido();

      while(fgets(linerm2,100,TXT))
      {
                                  if(line2 == 4)
                                  {
                                                found2 = 1;

                                        strcpy(linerm22,linerm2);


                                  }


                                  line2++;

      }

      if (found2 == 0)
      {

                printf("erro m2");

      }

      line2 = line2 - 1;


     fclose(TXT);
     printf("\n");
     sucesso();

}



;
#pragma endregion

#pragma endregion

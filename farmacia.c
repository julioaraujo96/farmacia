//#include <ctype.h>
//#include <stdbool.h> --> usar bools
#include <stdio.h>
#include <conio.h>

//cores
#define RED     "\x1b[31m"
#define GREEN   "\x1b[32m"
#define YELLOW  "\x1b[33m"
#define BLUE    "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN    "\x1b[36m"
#define RESET   "\x1b[0m"

//funções reutilizaveis
void nome_programa(){printf(YELLOW "=Farmacia Toze=\n\n" RESET);}
void input_invalido(){printf(RED "Erro. Introduza um valor valido.\n" RESET);}
void sair(){printf(YELLOW "Volte sempre!" RESET);}

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
     printf(" 3. Medicamentos\n");
     printf(" 4." RED " Sair\n\n" RESET);
     printf(GREEN"================\n"RESET);
     scanf("%s",&escolhastr);

     escolha = atoi(escolhastr);

     switch (escolha)
     {
     case 1: clientes();
               break;
     case 2: printf("Opcao 2\n\n");
             sleep(1);
               break;
     case 3: sair();
          break;
     default: input_invalido();
              sleep(1);
                break;
     }
     } while (escolha != 3);
}

void clientes() {

    char escolhastr[4];
     int escolha;
do
{
     system("cls");
     nome_programa();
     printf(GREEN"======Clientes======\n\n"RESET);
     printf(" 1. Criar Cliente\n");
     printf(" 2. Editar Cliente\n");
     printf(" 3. Eliminar Cliente\n");
     printf(" 4." RED " Voltar\n\n" RESET);
     printf(GREEN"================\n"RESET);
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
     case 4: sair();
          break;
          default: input_invalido();
          sleep(1);
               break;
     }
     } while (escolha != 4);

}
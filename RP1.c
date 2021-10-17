#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include <ctype.h>

//fun��o auxiliar para c�pia do conte�do dos arquivos//
void copiarConteudo(FILE *f, FILE *g){
    char reader[1000];
    int i;
    while(fgets(reader,1000,f)!=NULL){
        for(i=0;i<strlen(reader);i++){
                fputc(toupper(reader[i]),g);
                }
        }
}

int main(void){

   //Declara��o de var�aveis//
   setlocale(LC_ALL,"portuguese");
   FILE *f, *g;
   char nomeArq1[50], nomeArq2[50];
   int erro1, erro2;

   //Leitura do arquivo original com verifica��o, nome fornecido pelo teclado //
   printf("\t\t\t\tBEM VINDO!!!\n\nDigite o nome do arquivo a ser lido (com a extens�o):\n");
   scanf("%s", &nomeArq1);
   fflush(stdin);
   printf("\n");

   f = fopen(nomeArq1,"r");
        if(f==NULL){
            printf("Erro ao abrir o arquivo!\n");
            exit(1);
            }
   //Cria��o do segundo arquivo que receber� o conte�do do arquivo original com verifica��o, nome fornecido pelo teclado//
   printf("Digite o nome do arquivo a ser criado(com a extens�o)\n");
   scanf("%s", &nomeArq2);
   fflush(stdin);
   printf("\n");

   g = fopen(nomeArq2,"w");
        if(g==NULL){
            printf("Erro ao abrir o arquivo!\n");
            exit(1);
            }
   //Chamada da fun��o auxiliar para copiar e escrever o conte�do do arquivo original em mai�sculas para o segundo arquivo//
   copiarConteudo(f,g);

   printf("\nPressione qualquer tecla para continuar...");
   getchar();
   printf("\nO ARQUIVO \"%s\" FOI CRIADO COM O CONTE�DO DO ARQUIVO \"%s\"!\n\n", nomeArq2,nomeArq1);

   //Fechamento dos dois arquivos com verifica��o exibida para o usu�rio//
   erro1 = fclose(f);
       if(erro1==0){
           printf("Arquivo \"%s\" encerrado com sucesso!\n", nomeArq1);
           }else{
               printf("Erro ao encerrar o arquivo \"%s\"!\n", nomeArq1);
                }
   erro2 = fclose(g);
       if(erro2==0){
           printf("Arquivo \"%s\" encerrado com sucesso!\n", nomeArq2);
           }else{
               printf("Erro ao encerrar o arquivo \"%s\"!\n", nomeArq2);
               }

    getchar();
    return 0;
}

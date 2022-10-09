#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include <ctype.h>

//função auxiliar para cópia do conteúdo dos arquivos//
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

   //Declaração de varíaveis//
   setlocale(LC_ALL,"portuguese");
   FILE *f, *g;
   char nomeArq1[50], nomeArq2[50];
   int erro1, erro2;

   //Leitura do arquivo original com verificação, nome fornecido pelo teclado //
   printf("\t\t\t\tBEM VINDO!!!\n\nDigite o nome do arquivo a ser lido (com a extensão):\n");
   scanf("%s", &nomeArq1);
   fflush(stdin);
   printf("\n");

   f = fopen(nomeArq1,"r");
        if(f==NULL){
            printf("Erro ao abrir o arquivo!\n");
            exit(1);
            }
   //Criação do segundo arquivo que receberá o conteúdo do arquivo original com verificação, nome fornecido pelo teclado//
   printf("Digite o nome do arquivo a ser criado(com a extensão)\n");
   scanf("%s", &nomeArq2);
   fflush(stdin);
   printf("\n");

   g = fopen(nomeArq2,"w");
        if(g==NULL){
            printf("Erro ao abrir o arquivo!\n");
            exit(1);
            }
   //Chamada da função auxiliar para copiar e escrever o conteúdo do arquivo original em maiúsculas para o segundo arquivo//
   copiarConteudo(f,g);

   printf("\nPressione qualquer tecla para continuar...");
   getchar();
   printf("\nO ARQUIVO \"%s\" FOI CRIADO COM O CONTEÚDO DO ARQUIVO \"%s\"!\n\n", nomeArq2,nomeArq1);

   //Fechamento dos dois arquivos com verificação exibida para o usuário//
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

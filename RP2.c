#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<conio.h>

typedef struct sClasse{
    char nome[39];
    float nota;
}Classe;


int main(void)
{
    setlocale(LC_ALL,"portuguese");

    //Cria��o e abertura do arquivo bin�rio com verifica��o//
    FILE *f;
    f = fopen("Alunos.dat", "wb");
        if(f==NULL){
            printf("Erro na abertura do arquivo!");
            exit(1);
        }

    //Informa��o do n�mero de alunos//
    int qtd;
    printf("\t\t\t\tBEM VINDO!!!\n\nDigite a quantidade de alunos a serem registrados:\n");
    scanf("%d", &qtd);
    fflush(stdin);
    printf("\n");

    //Declara��o de vari�vel struct e auxiliares//
    Classe *ptrAlunos;
    int i,j;
    float maiornota=0;
    int erro;

    //Aloca��o de mem�ria e preenchimento dos dados//
    ptrAlunos = (Classe*) malloc (qtd*sizeof(Classe));
    if(ptrAlunos != NULL){
        for(i=0;i<qtd;i++){
            printf("Digite o nome do aluno %d:\n", i+1);
            gets(ptrAlunos[i].nome);
            printf("Digite a nota final do aluno %d:\n", i+1);
            scanf("%f",&ptrAlunos[i].nota);
            fflush(stdin);
            printf("\n");
        }
    }else{
        printf("N�o foi poss�vel alocar mem�ria");
    }

    //Grava��o dos dados em arquivo bin�rio com verifica��o para o usu�rio//
    for(i=0;i<qtd;i++){
        fwrite(ptrAlunos[i].nome,sizeof(Classe),qtd,f);
        fwrite(&ptrAlunos[i].nota,sizeof(Classe),qtd,f);
    }
        if(f!=NULL){
            printf("\tArquivo salvo com sucesso!\n");
        }else{
            printf("\tERRO AO SALVAR O ARQUIVO!\n");
        }
    //Fechamento do arquivo criado com verifica��o para o usu�rio//
    erro = fclose(f);
        if(erro==0){
           printf("\tArquivo encerrado com sucesso!\n");
           }else{
               printf("\tERRO AO FECHAR O ARQUIVO!\n");
                }
    printf("\nPressione qualquer tecla para continuar...");
    getchar();
    //Reabertura do arquivo para leitura e verifica��o//
    f=fopen("Alunos.dat","rb");
        if(f!=NULL){
                printf("\n\tArquivo reaberto para an�lise dos dados...\n");
        }

    for(i=0;i<qtd;i++){
        fread(ptrAlunos[i].nome,sizeof(Classe),qtd,f);
        fread(&ptrAlunos[i].nota,sizeof(Classe),qtd,f);
        if(ptrAlunos[i].nota>=maiornota){
            maiornota = ptrAlunos[i].nota;
            j = i;
        }
    }
    printf("\nPressione qualquer tecla para continuar...");
    getchar();
    //Exibi��o do nome do aluno de maior nota//
    printf("\n\n\n\n\nO(A) ALUNO(A) COM A MAIOR NOTA FINAL �:\n");
    printf("\t\t%s  :  %.2f\n\n", ptrAlunos[j].nome,ptrAlunos[j].nota);

    //Fechamento do arquivo criado com verifica��o para o usu�rio//
    erro = fclose(f);
        if(erro==0){
           printf("\tArquivo fechado com sucesso!\n");
           }else{
               printf("\tERRO AO FECHAR O ARQUIVO!\n");
                }

    //Desaloca��o de mem�ria//
    free(ptrAlunos);
    ptrAlunos = NULL;

    getchar();
    return 0;
}

#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    printf(" Digite 2 n�meros: ");
    scanf("%d %d", &num1, &num2);

    if((num1>num2)&&(num1%2==0)&&(num2%2==0)){
        printf("%d � o maior e � par\n%d � o menor e � par\n\n", num1, num2);
    }else if ((num1>num2)&&(num1%2==0)&&(num2%2!=0)){
        printf("%d � o maior e � par\n%d � o menor e � �mpar\n\n", num1, num2);
    }else if ((num1>num2)&&(num1%2!=0)&&(num2%2==0)){
        printf("%d � o maior e � �mpar\n%d � o menor e � par\n\n", num1, num2);
    }else if ((num1>num2)&&(num1%2!=0)&&(num2%2!=0)){
        printf("%d � o maior e � �mpar\n%d � o menor e � �mpar\n\n", num1, num2);
    }else if ((num1<num2)&&(num1%2==0)&&(num2%2==0)){
        printf("%d � o menor e � par\n%d � o maior e � par\n\n", num1, num2);
    }else if ((num1<num2)&&(num1%2==0)&&(num2%2!=0)){
        printf("%d � o menor e � par\n%d � o maior e � �mpar\n\n", num1, num2);
    }else if ((num1<num2)&&(num1%2!=0)&&(num2%2==0)){
        printf("%d � o menor e � �mpar\n%d � o maior e � par\n\n", num1, num2);
    }else if ((num1<num2)&&(num1%2!=0)&&(num2%2!=0)){
        printf("%d � o menor e � �mpar\n%d � o maior e � �mpar\n\n", num1, num2);
    }

    return 0;
}



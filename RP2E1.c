#include<stdio.h>
#include<locale.h>
int main(){
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;
    printf(" Digite 2 números: ");
    scanf("%d %d", &num1, &num2);

    if((num1>num2)&&(num1%2==0)&&(num2%2==0)){
        printf("%d é o maior e é par\n%d é o menor e é par\n\n", num1, num2);
    }else if ((num1>num2)&&(num1%2==0)&&(num2%2!=0)){
        printf("%d é o maior e é par\n%d é o menor e é ímpar\n\n", num1, num2);
    }else if ((num1>num2)&&(num1%2!=0)&&(num2%2==0)){
        printf("%d é o maior e é ímpar\n%d é o menor e é par\n\n", num1, num2);
    }else if ((num1>num2)&&(num1%2!=0)&&(num2%2!=0)){
        printf("%d é o maior e é ímpar\n%d é o menor e é ímpar\n\n", num1, num2);
    }else if ((num1<num2)&&(num1%2==0)&&(num2%2==0)){
        printf("%d é o menor e é par\n%d é o maior e é par\n\n", num1, num2);
    }else if ((num1<num2)&&(num1%2==0)&&(num2%2!=0)){
        printf("%d é o menor e é par\n%d é o maior e é ímpar\n\n", num1, num2);
    }else if ((num1<num2)&&(num1%2!=0)&&(num2%2==0)){
        printf("%d é o menor e é ímpar\n%d é o maior e é par\n\n", num1, num2);
    }else if ((num1<num2)&&(num1%2!=0)&&(num2%2!=0)){
        printf("%d é o menor e é ímpar\n%d é o maior e é ímpar\n\n", num1, num2);
    }

    return 0;
}



#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "portuguese");
    char nome[30];
    unsigned int idade;
    float peso;
    printf("Qual é o seu nome? ");
    gets(nome);
    printf("Qual é a sua idade? ");
    scanf("%d", &idade);
    printf("Qual é o seu peso (Kg)? ");
    scanf("%f", &peso);
    printf("\n------------<<<PROCESSANDO>>>------------\n");
    printf("Muito prazer, %s. Você tem %d anos e pesa %.2fKg, correto?\nFIM.", nome, idade, peso);


}

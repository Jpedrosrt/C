#include <stdio.h>

void main() { // se no lugar do void for int tem que ter o return 0
    // void n�o � obrigatorio
    char nome[10];
    printf("Qual � o seu nome? ");
    scanf("%s", &nome);
    printf("Muito prazer em te conhecer %s", nome);
    return 0;
}

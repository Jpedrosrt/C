#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "portuguese");
    unsigned int idade = 20;
    float peso = 80.8;
    char sexo = 'M';
    char nome[] = "Jo�o";

    printf("%s � do sexo %c, com %d anos e pesa %.2fKg", nome, sexo, idade, peso);
}

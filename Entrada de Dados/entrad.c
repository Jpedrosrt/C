#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "portuguese");
    int n;
    float m;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("Digite um número real: ");
    scanf("%f", &m);
    printf("Você acabou de digitar o número %d e  %.1f\n", n, m);

    //Lendo caracteres
    char r;
    char s;
    printf("Digite uma letra: ");
    fflush(stdin);
    scanf("%c", &r);
    printf("Digite outra letra: ");
    fflush(stdin); //limpar a entrada do teclado
    scanf("%c", &s);
    printf("Você digitou as letras \"%c\" e \"%c\"\n", r, s);

    //Lendo caracteres de outra forma
    char l;
    char p;
    printf("Digite uma letra: ");
    fflush(stdin);
    l = getchar();
    printf("Digite outra letra: ");
    fflush(stdin); //limpar a entrada do teclado
    p = getchar();
    printf("Você digitou as letras \"%c\" e \"%c\"\n", l, p);

    //Lendo Strings
    char nome[30];
    char ender[40];
    printf("Digite seu nome: ");
    fflush(stdin);
    gets(nome);
    printf("Digite seu endereço: ");
    gets(ender);
    printf("Seu nome é %s e mora em %s", nome, ender);

}

#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "portuguese");
    int n;
    float m;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &n);
    printf("Digite um n�mero real: ");
    scanf("%f", &m);
    printf("Voc� acabou de digitar o n�mero %d e  %.1f\n", n, m);

    //Lendo caracteres
    char r;
    char s;
    printf("Digite uma letra: ");
    fflush(stdin);
    scanf("%c", &r);
    printf("Digite outra letra: ");
    fflush(stdin); //limpar a entrada do teclado
    scanf("%c", &s);
    printf("Voc� digitou as letras \"%c\" e \"%c\"\n", r, s);

    //Lendo caracteres de outra forma
    char l;
    char p;
    printf("Digite uma letra: ");
    fflush(stdin);
    l = getchar();
    printf("Digite outra letra: ");
    fflush(stdin); //limpar a entrada do teclado
    p = getchar();
    printf("Voc� digitou as letras \"%c\" e \"%c\"\n", l, p);

    //Lendo Strings
    char nome[30];
    char ender[40];
    printf("Digite seu nome: ");
    fflush(stdin);
    gets(nome);
    printf("Digite seu endere�o: ");
    gets(ender);
    printf("Seu nome � %s e mora em %s", nome, ender);

}

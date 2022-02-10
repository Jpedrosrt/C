#include <stdio.h>
#include <locale.h> // resolver os problemas de acentua��o

void main() {

    setlocale(LC_ALL, "Portuguese"); // resolvendo os problemas de acentua��o
    // pode ser LC_ALL ou 0
    printf("Oi,\ntudo\nbem?");
    printf("\n--------------------------\n");
    printf("Oi,\ttudo\tbem?");
    printf("\n--------------------------\n");
    printf("Oi, t\budo be\bm?");
    printf("\n--------------------------\n");
    printf("Oi, tudo \rbem?");
    printf("\n--------------------------\n");
    printf("Mostrando a contrabarra e as aspas \" \\ \"");
    printf("\n--------------------------\n");
    printf("mostrando a interroga��o \" \? \" ");
    printf("\n--------------------------\n");
    printf("beep \a ou \7");
    printf("\n--------------------------\n");
    printf("Olha a porcentagem -> %% :)");
    printf("\n--------------------------\n");
    printf("C �\n\"SUPER\"\nf�cil!");
}

/*
    \n - Nova linha
    \t - tabula��o (Como apertar tab)
    \b - backspace (apaga um caractere)
    \r - retorno (voltar para o inicio da linha
                e come�a substituir os valores
                do inicio com o restante)
    \\ - mostra a contrabarra
    \" - mostra a aspa
    \? - mostra a interroga��o
    \a ou \7 - beep
    %% - mostra a porcentagem
*/


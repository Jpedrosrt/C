#include <stdio.h>
#include <locale.h>

void main() {

    setlocale(LC_ALL, "Portuguese");

    printf("<<<Ex001 - Listagem>>>\n");
    printf("Listagem de Alunos\n");
    printf("Nome\t\t\tNota\n");
    printf("-----------------------------\n");
    printf("Ana Beatriz\t\t8.5\nBianca Martins\t\t9.0\nClaúdia Sá\t\t5.5\nGiovanna Silva\t\t7.5");
}

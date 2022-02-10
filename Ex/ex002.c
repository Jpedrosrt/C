#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");

    printf("<<< Ex002 - Especiais >>>\n");
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    printf("\\a\t=\tbeep\n");
    printf("\\n\t=\tNova linha\n");
    printf("\\t\t=\tTabulação\n");
    printf("\\\t=\tBarra\n");
    printf("%%\t=\tPorcentagem\n");
    printf("\\?\t=\tInterrogação\n");
}

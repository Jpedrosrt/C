#include <stdio.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "portuguese");
    char nome1[30], nome2[30], nome3[30], sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;
    printf("Cadastrando a primeira pessoa:\n-------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome1);
    printf("SEXO (M/F): ");
    fflush(stdin);
    sexo1 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota1);

    printf("\nCadastrando a segunda pessoa:\n-------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome2);
    printf("SEXO (M/F): ");
    fflush(stdin);
    sexo2 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota2);

    printf("\nCadastrando a terceira pessoa:\n-------------------------------\n");
    printf("NOME: ");
    fflush(stdin);
    gets(nome3);
    printf("SEXO (M/F): ");
    fflush(stdin);
    sexo3 = getchar();
    printf("NOTA: ");
    scanf("%f", &nota3);

    printf("Listagem Completa\n--------------------------\n");
    printf("NOME            SEXO    NOTA\n");
    printf("%s %12c %-10.1f", nome1, sexo1, nota1);

}

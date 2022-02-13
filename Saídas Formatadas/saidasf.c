#import <stdio.h>
#import <locale.h>

void main() {
    setlocale(LC_ALL, "portuguese");
    printf("O %s tem %i anos\n","João", 20);
    printf("Seu peso atual é %5.2fKg\n", 80.5);
    printf("O seu sexo é %c", 'M');
}

/*
    %d ou %i - para números inteiros
    %s - cadeia de caracteres
    %f - float/double
    %c - char
*/

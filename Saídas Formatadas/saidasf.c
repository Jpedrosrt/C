#import <stdio.h>
#import <locale.h>

void main() {
    setlocale(LC_ALL, "portuguese");
    printf("O %s tem %i anos\n","Jo�o", 20);
    printf("Seu peso atual � %5.2fKg\n", 80.5);
    printf("O seu sexo � %c", 'M');
}

/*
    %d ou %i - para n�meros inteiros
    %s - cadeia de caracteres
    %f - float/double
    %c - char
*/

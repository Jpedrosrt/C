#include <string.h>
#define LIN (36)
#define COL (2)
// Definicoes de E/S
#include <avr/io.h>
// Biblioteca padrao de E/S
#include <stdio.h>
// Definicao do clock do sistema
#define F_CPU 16000000UL
// Definicao da taxa de transmissao
#define BAUD 9600
// Biblioteca auxiliar para comunicacao serial
#include <util/setbaud.h>

#include <ctype.h>
// Procedimento de inicializacao da UART 0
void inicializar_uart0() {
	// Configurando taxa de transmissao
	UBRR0H = UBRRH_VALUE;
	UBRR0L = UBRRL_VALUE;
	// Habilitando recepcao e transmissao
	UCSR0B = (1 << RXEN0) | (1 << TXEN0);
	// Modo assincrono e sem paridade
	// Quadro com 8 bits com 1 bit de parada
	UCSR0C = (1 << UCSZ01) | (1 << UCSZ00);
}
// Funcao para envio de dado pela UART 0
int enviar_dado_uart0(char dado, FILE* fluxo) {
	// Checando por quebra de linha
	if(dado == '\n') {
		enviar_dado_uart0('\r', fluxo);
	}
	// Esperando por envio pendente
	while(!(UCSR0A & (1 << UDRE0)));
	// Enviando dado
	UDR0 = dado;
	// Retornando sem erro
	return 0;
}
// Funcao para recebimento de dado pela UART 0
int receber_dado_uart0(FILE* fluxo) {
	// Esperando por recebimento
	while(!(UCSR0A & (1 << RXC0)));
	// Retornando registrador de dado
	return UDR0;
}
// Criando fluxos de E/S para serial
FILE stdin_uart0 = FDEV_SETUP_STREAM(NULL, receber_dado_uart0, _FDEV_SETUP_READ);
FILE stdout_uart0 = FDEV_SETUP_STREAM(enviar_dado_uart0, NULL, _FDEV_SETUP_WRITE);

void morse(char *texto) {
    const char *mapa[LIN][COL] = {
        {"A", ".-"}, {"B", "-..."},
        {"C", "-.-."}, {"D", "-.."},
        {"E", "."}, {"F", "..-."},
        {"G", "--."}, {"H", "...."},
        {"I", ".."}, {"J", ".---"},
        {"K", "-.-"}, {"L", ".-.."},
        {"M", "--"}, {"N", "-."},
        {"O", "---"}, {"P", ".--."},
        {"Q", "--.-"}, {"R", ".-."},
        {"S", "..."}, {"T", "-"},
        {"U", "..-"}, {"V", "...-"},
        {"W", ".--"}, {"X", "-..-"},
        {"Y", "-.--"}, {"Z", "--.."},
        {"0", "-----"}, {"1", ".----"},
        {"2", "..---"}, {"3", "...--"},
        {"4", "....-"}, {"5", "....."},
        {"6", "-...."}, {"7", "--..."},
        {"8", "---.."}, {"9", "----."},
	};
	char mor[60];

	for(int r = 0; r < texto[r]; r++) {
        char l = toupper(texto[r]);

        for (int i = 0; i < LIN; i++) {
            if (l == *mapa[i][0]) {
                strcpy(mor, mapa[i][1]);
                printf("%s ", mor);
            }
        }
	}
	printf("\n");
}

int main() {
	char texto[100] = { 0 };


	while(1) {
		gets(texto);
        morse(texto);
    }
    return 0;
}


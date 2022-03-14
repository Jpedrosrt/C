#include <stdio.h>
#include <string.h>
#define LIN (36)
#define COL (2)
#define const char *mapa[LIN][COL] = {{"A", ".-"}, {"B", "-..."},{"C", "-.-."}, {"D", "-.."},{"E", "."}, {"F", "..-."},{"G", "--."}, {"H", "...."},{"I", ".."}, {"J", ".---"},{"K", "-.-"}, {"L", ".-.."},{"M", "--"}, {"N", "-."},{"O", "---"}, {"P", ".--."},{"Q", "--.-"}, {"R", ".-."},{"S", "..."}, {"T", "-"},{"U", "..-"}, {"V", "...-"},{"W", ".--"}, {"X", "-..-"},{"Y", "-.--"}, {"Z", "--.."},{"0", "-----"}, {"1", ".----"},{"2", "..---"}, {"3", "...--"},{"4", "....-"}, {"5", "....."},{"6", "-...."}, {"7", "--..."},{"8", "---.."}, {"9", "----."}}
void morse(char *texto) {

	char mor[60];

	for(int r = 0; r < texto[r]; r++) {
        char l = toupper(texto[r]);

        for (int i = 0; i < LIN; i++) {
            if (l == mapa[i][0]) {
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
		// Recebendo e enviando dados
		gets(texto);
        morse(texto);
        }
    return 0;
}

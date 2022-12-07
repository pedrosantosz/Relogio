#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
	int horas = 0, minutos = 0, segundos = 0;
	
	while (1) {
		while(horas < 24) {
			while(minutos < 60) {
				while(segundos < 60) {
					printf("%d:%d:%d", horas, minutos, segundos);
					Sleep(1000); // usar pra ajustar a velocidade com que os segundos vão alternar (em mili segundos)
					system("cls");
					segundos++;
				}
			segundos = 0;
			minutos++;
			}
		minutos = 0;
		horas++;
		}
		horas = 0;
	}
}

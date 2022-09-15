#include <stdio.h>

int main(int argc, char *argv[]) {
	float raio, perim;
	puts("Entre com o raio da circunferencia: ");
	scanf("%f", &raio);
	perim = 2 * 3.1415 * raio;
	puts("");
	printf("O perimetro da circunferencia é: %f", perim);
	return 0;
}


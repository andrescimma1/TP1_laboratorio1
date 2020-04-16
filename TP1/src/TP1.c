/*
 ============================================================================
 Name        : TP1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x, y;

	printf("*** Menu de opciones ***\n");
	printf("1. Ingresar 1er operando (A=%d)\n", x);
	printf("2. Ingresar 2do operando (B=%d)\n", y);
	printf("3. Calcular todas las operaciones\n")
	printf("\t a) Calcular la suma (A+B)\n");
	printf("\t b) Calcular la resta (A-B)\n");
	printf("\t c) Calcular la division (A/B)\n");
	printf("\t d) Calcular la multiplicacion (A*B)\n");
	printf("\t e) Calcular el factorial (A!)\n");
	printf("4. Informar resultados\n");
	printf("5. Salir\n\n");

	return EXIT_SUCCESS;
}

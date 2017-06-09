#include <stdio.h>
#include <string.h>

// Prototipos

int cuadrado();

int main(){
	int n1=0, resultCuad=0;

	printf("Escribe un numero para calcular su cuadrado: ");
	scanf("%i",&n1);

	resultCuad = cuadrado(n1);

	printf("\n");

	printf("El resultado es: %i",resultCuad);
}

int cuadrado(int num){
	
	int resultado=0;

	resultado = num * num;

	return resultado;
}
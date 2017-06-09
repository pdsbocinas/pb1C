#include <stdio.h>
#include <string.h>

// Prototipos

int main(){
	int n1=0, area=0;

	printf("Escribe el radio de un circulo: ");
	scanf("%i",&n1);

	area = calcularArea(n1);

	printf("\n");

	printf("El area es: %i",area);
}

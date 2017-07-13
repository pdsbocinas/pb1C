#include <stdio.h>

struct complejo
{
	int x;
	int y;
};

void sumar(int a,int b);
void restar(int a,int b);

int main()
{
	int r=0,z=0;

	struct complejo numeros;
	sumar(r,z);
}

void sumar(int n1, int n2, int resultado)
{
	printf("Ingrese un numero: ");
	scanf("%i",&complejo.x);

	printf("Ingrese otro numero: ");
	scanf("%i",&complejo.y);
	
	complejo.x = n1;
	complejo.y = n2;
	
	resultado = n1 + n2;

	printf("El resultado es: %i", resultado);
}
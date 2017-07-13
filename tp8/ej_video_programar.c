#include <stdio.h>

void cambio(int *a, int *b, int z);

int main()
{
	int x,y,z;

	x = 5;

	y = 6;

	z = 20;

	cambio(&x,&y,z);

	printf("%i, %i, %i", x,y,z);

	return 0;
}

void cambio(int *a, int *b, int c){
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;

	c=100;
}
#include <stdio.h>

void sumar(int *a, int *b, int *c);

int main()
{
	int x = 2;
	int y = 5;
	int k = 0;
	
	sumar(&x,&y,&k);

	printf("La suma es: %d",k ); 
}

void sumar(int *a, int *b, int *c)
{
	*c = *a + *b;
}
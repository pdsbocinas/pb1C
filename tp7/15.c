#include <stdio.h>

void ecuacion(int a, int b, int c);

int main()
{
	ecuacion(0,0,0);
}

void ecuacion(int a, int b, int c){
	int x,y,resultado;

	printf("Ingrese un numero para X: ");
	scanf("%i",&x);

	printf("Ingrese un numero para Y: ");
	scanf("%i",&y);

	resultado = a*y+b*x+c;

	if(resultado == 0)
	{
		printf("1");
	}else{
		printf("2");
	}
}
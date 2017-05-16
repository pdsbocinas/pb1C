#include <stdio.h>

int main()
{
	int a=0,b=0,resultado=0,opcion=0;
	
	printf("Ingrese un numero: \n");
	scanf("%i", &a);

	printf("Ingrese otro numero: \n");
	scanf("%i", &b);

	if(a>b)
	{
		printf("%i es el menor", b);
	}else{
		printf("%i es el menor", a);
	}

	return 0;
}
#include <stdio.h>

void menu();

int main()
{
	menu();
	return 0;
}

void menu()
{
	int valor=0,opt=0;
	printf("Ingrese una operacion:\n\n1. Cargar \n2. Operaciones\n3. Salir\n");
	scanf("%i",&opt);

	switch(opt)
	{
		case 1:
			printf("Ingrese una variable: ");
			scanf("%i",&valor);
		break;
		case 2:
			printf("Ingrese una operacion: ");
			scanf("%i",&valor);
		break;
		case 3:
		break;
	}

	printf("El valor es: %i",valor);

}
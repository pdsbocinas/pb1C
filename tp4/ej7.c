#include <stdio.h>

int main()
{
	int opcion=0;

	printf("Seleccione una estacion: 1.Once, 2.Belgrano, 3.Centro, 4.Avellaneda, 5.Ramos Mejia\n");
	scanf("%i", &opcion);

	switch(opcion)
	{
		case 1:
			printf("Eligió Once\n");
		break;

		case 2:
			printf("Eligió Belgrano\n");
		break;

		case 3:
			printf("Eligió Centro\n");
		break;

		case 4:
			printf("Eligió Avellaneda\n");
		break;

		case 5:
			printf("Eligió Ramos Mejia\n");
		break;

		default:
			printf("Adios, no funciona");
		break;
	}
	
	return 0;
}
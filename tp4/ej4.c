#include <stdio.h>

int main()
{
	int a=0,b=0,resultado=0,opcion=0;

	printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
	printf("\n         º               :: C A L C U L A D O R A ::                 º");
	printf("\n         ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
	printf("\n         º                                                           º");
	printf("\n         º       1.- Suma                     3.- Multiplicacion     º");
	printf("\n         º                                                           º");
	printf("\n         º       2.- Resta                    4.- Division           º");
	printf("\n         º                                                           º");
	printf("\n         º                                                           º");
	printf("\n         º                        5.- Salir                          º");
	printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
	printf("\n                     Nota: Solo funciona con numeros enteros");
	printf("\n");
	printf("\n                              Elija una opcion: ");
	scanf("%d",&opcion);
	
	switch(opcion)
	{
		case 1:
			printf("Ingrese un numero \n");
			scanf("%i", &a);
			printf("Ingrese otro numero \n");
			scanf("%i", &b);

			resultado = a + b;

			printf("El resultado de %i y %i es = %i", a,b,resultado );
		break;

		case 2:
			printf("Ingrese un numero \n");
			scanf("%i", &a);
			printf("Ingrese otro numero \n");
			scanf("%i", &b);

			resultado = a - b;

			printf("El resultado de %i y %i es = %i", a,b,resultado );
		break;

		case 3:
			printf("Ingrese un numero \n");
			scanf("%i", &a);
			printf("Ingrese otro numero \n");
			scanf("%i", &b);

			resultado = a * b;

			printf("El resultado de %i y %i es = %i", a,b,resultado );
		break;

		case 4:
			printf("Ingrese un numero \n");
			scanf("%i", &a);
			printf("Ingrese otro numero \n");
			scanf("%i", &b);

			resultado = a / b;

			printf("El resultado de %i y %i es = %i", a,b,resultado );
		break;
		
		case 5:
			printf("Adios!!\n");
			break;

		default:
			printf("No es una opcion valida \n");
	}

	return 0;
}
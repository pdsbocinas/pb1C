#include <stdio.h>

#define FILA 2
#define COL 4

int main()
{
	int i=0,j=0,vec[FILA][COL],suma=0,promedio=0;
	
	for (int i = 0; i < FILA; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			vec[i][j] = 0;
		}
	}

	for (int i = 0; i < FILA; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			printf("Ingrese notas: ");
			scanf("%i",&vec[i][j]);

			printf("\n");
		}
	}

	for (int i = 0; i < FILA; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			
			printf("%i ",vec[i][j]);
		}

		printf("\n");
	}

	for(int i=0;i<FILA;i++){
	   
	    for(int j=0;j<COL;j++){
	        
	        suma += vec[i][j];
	    }

	    promedio = suma / 4;

	    printf("\n");
	    printf("La suma de la fila es: %i",suma);
	    printf("\n");
	    printf("El promedio de la fila es: %i",promedio);
	}
	
	return 0;
}
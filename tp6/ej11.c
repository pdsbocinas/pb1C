#include <stdio.h>
#define MAX 5

int main()
{
	int i=0,j=0,vec[MAX],suma=0,aux=0;

	for (int i=0;i<MAX; i++)
	{
		printf("Ingrese un numero: ");
		scanf("%i",&vec[i]);

		if((i%2) == 0)
		{
			suma = suma + vec[i];
		}
		
	}

	for (i = 0; i < MAX; i++){
		for (j = 0; j < MAX; j++) {
			if (vec [i] > vec [j]){ 
				aux = vec [i]; 
				vec [i] = vec [j]; 
				vec [j] = aux; 
			}
		}
	}

	for (int i = 0; i < MAX;i++)
	{
		printf("%i ",vec[i]);
	}

	printf("El mayor es: %i",vec[0]);

}
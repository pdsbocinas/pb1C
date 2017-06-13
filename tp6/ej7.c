#include <stdio.h>
#define MAX 5

int main()
{
	int i=0,vec[MAX],suma=0;

	for (int i=0;i<MAX; i++)
	{
		printf("Ingrese un numero: ");
		scanf("%i",&vec[i]);

		if((i%2) == 0)
		{
			suma = suma + vec[i];
		}
		
	}

	printf("La suma es: %i",suma);

	return 0;
}
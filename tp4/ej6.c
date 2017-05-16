#include <stdio.h>

int main()
{
	int i=0,max=0,num=0;

	for(i=0;i<4;i++)
	{
		printf("Ingrese un numero\n");
		scanf("%i", &num);

		if(num>max)
		{
			max=num;
		}
	}

	printf("El mayor es %i ", max);
	
	return 0;
}
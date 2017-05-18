#include <stdio.h>

#define F 20
#define C 3

int main()
{
	int i=0,j=0,mat=0,unidIn=0,unidOut=0,stock=0,vec[F][C];
	
	do
	{
		printf("Ingrese un material: \n");
		scanf("%i",&vec[0][0]);

		printf("Ingrese un unidades ingresadas: \n");
		scanf("%i",&vec[0][1]);

		printf("Ingrese un unidades de salida: \n");
		scanf("%i",&vec[0][2]);

		printf("Ingrese stock: \n");
		scanf("%i",&vec[0][3]);
		
	}while(mat<25);
	
	printf("La matriz es de: %i ",vec[F][C]);
		
}
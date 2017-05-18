#include <stdio.h>

#define F 1
#define C 4

int main()
{
	int i=0,j=0,codIn=1;
	int matriz[F][C];
	

	do{
		printf("Quiere ingresar\n");
		scanf("%i",&codIn);

		for(i=0; i<F; i++)
		
			for(j=0; j<C; j++)
			{
				printf("Ingrese el elemento F=%d y Columna=%d de la matriz:\n", i,j);
				scanf("%d", &matriz[i][j]);
			}
		
		printf("Ha ingresado los siguientes datos:\n\n");
		
		for(i=0; i<F; i++)
		{
			for(j=0; j<C; j++)
			{
				printf("*%d*", matriz[i][j]);
			}
		}
	
	}while(codIn!=1);
	
	return 0;
}
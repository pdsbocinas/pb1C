#include <stdio.h>
#define CONST 5

// prototipos

void leerVector(int vec[CONST]);
void ordenarVec(int vec[CONST]);
void imprimir(int vec[CONST]);
void copiarVec(int vec[CONST], int vec2[CONST]);
void elMayor(int vec2[CONST]);

int main()
{
	int vec[CONST],vec2[CONST],i=0;

	leerVector(vec);
	
	printf("\n");

	ordenarVec(vec);
	
	printf("\n");
	
	imprimir(vec);

	printf("\n");
	
	printf("Este en la copiar del vec a vec2: ");
	
	copiarVec(vec2,vec);

	printf("\n");

	elMayor(vec);
	
}

void leerVector(int a[CONST])
{
	int i=0;

	for(i=0;i<CONST;i++){
		printf("Ingrese un numero: ");
		scanf("%i", &a[i]);
	}
	
}

void ordenarVec(int a[CONST])
{
	int i,j,aux;

	for(i=0;i<CONST;i++)
	{
		for(j=0;j<CONST;j++)
		{
			if(a[j]>a[j+1])
			{
				aux = a[j];
				a[j] = a[j+1];
				a[j+1] = aux;
			}	
		}
	}
}

void imprimir(int a[CONST])
{
	int i=0;

	for(i=0;i<CONST;i++)
	{
		printf("%i ",a[i]);
	}
}

void copiarVec(int b[CONST],int a[CONST])
{
	int i=0,j=0;	

	for(i=0;i<CONST;i++)
	{
		 printf ("%i ", b[i] = a[i]);
	}

}

void elMayor(int a[CONST])
{
	int mayor = 0,i=0;

	for(i=0;i<CONST;i++)
	{
		if(a[i] > mayor)
		{
			mayor = a[i];
		}
	}

	printf("El mas grande es: %i",mayor);
}
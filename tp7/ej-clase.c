#include <stdio.h>

#define MAX 2

// Prototype

void limpiar(int mat[MAX][MAX]);
void cargar(int mat[MAX][MAX]);
void mostrar(int mat[MAX][MAX]);
void sumar(int mat[MAX][MAX],int mat2[MAX][MAX]);

int main(){
	int mat[MAX][MAX],mat2[MAX][MAX],i=0,j=0;
	
	
	limpiar(mat);
	limpiar(mat2);
	
	cargar(mat);
	printf("\n");
	cargar(mat2);
	
	printf("\n");
	
	sumar(mat,mat2);
	
	return 0;
}

void limpiar(int a[MAX][MAX])
{
	int i=0,j=0;
	
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			a[i][j] = 0;
		}
	}
}

void cargar(int a[MAX][MAX])
{
	int i=0,j=0,num=0;
	
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			printf("Ingrese un numero: ");
			scanf("%i",&a[i][j]);
		}
	}
}

void mostrar(int a[MAX][MAX])
{
	int i=0,j=0,num=0;
	
	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			printf("Los numeros son: %i ",a[i][j]);
		}
	}
}

void sumar(int a[MAX][MAX],int b[MAX][MAX])
{
	int suma[MAX][MAX],i,j;

	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			suma[i][j] = a[i][j] + b[i][j];
		}
	}

	for(i=0;i<MAX;i++)
	{
		for(j=0;j<MAX;j++)
		{
			printf("%i", suma[i][j]);
		}

		printf("\n");
	}
}


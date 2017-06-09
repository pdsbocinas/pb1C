#include <stdio.h>
#define CONST 5

// prototipos

void leerVector();

int main()
{
	int vec[5], num=0, i=0;
	
	for(i=0;i<5;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&vec[i]);
	}
	
	leerVector(vec[5],i);

	return 0;
}

void leerVector(int vec[], int num)
{
	int i=0;

	for(i=0;i<5;i++){
		printf("los numero son: %i\n",vec[i]);
	}
	
}
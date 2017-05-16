#include <stdio.h>

int main()
{
	int nota1=0,nota2=0,nota3=0,faltas=0;

	printf("Ingrese nota 1: \n");
	scanf("%i", &nota1);

	printf("Ingrese nota 2: \n");
	scanf("%i", &nota2);

	printf("Ingrese nota 3: \n");
	scanf("%i", &nota3);

	printf("Ingrese cantidad de faltas: \n");
	scanf("%i", &faltas);

	if(nota1 >= 7 && nota2 >= 7 && nota3 >= 7 && faltas < 5)
	{
		printf("Promociono");
		
	}else if(nota1 >= 4 && nota2 >= 4 && nota3 >= 4 && faltas < 5)

	{
		printf("Curso");
	}else

	{
		printf("Reprobo\n");
	}
}
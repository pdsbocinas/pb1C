#include <stdio.h>

int main()
{
	int hom=0,muj=0,poblacion=0;

	printf("Ingrese numero de hombres: \n");
	scanf("%i", &hom);

	printf("Ingrese numero de mujeres: \n");
	scanf("%i", &muj);

	poblacion = hom + muj;

	printf("La poblacion total es: %i", poblacion);

	return 0;
}
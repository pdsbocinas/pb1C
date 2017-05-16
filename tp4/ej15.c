#include <stdio.h>

int main()
{
	int hom=0,muj=0,poblacion=0,porH=0,porM=0;

	printf("Ingrese numero de hombres: \n");
	scanf("%i", &hom);

	printf("Ingrese numero de mujeres: \n");
	scanf("%i", &muj);

	poblacion = hom + muj;

	porH = (hom*100)/poblacion;

	porM = (muj*100) / poblacion;


	printf("La poblacion total es: %d de hombres y %d de mujeres",porH,porM);

	return 0;
}
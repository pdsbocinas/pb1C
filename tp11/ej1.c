#include <stdio.h>

#define BUFFER_SIZE 100

struct agenda
{
	char nombre[20];
	int numero;
};

int main()
{
	int i,n=0;

	struct agenda contactos;

	printf("Cuantos contactos quiere ingresar: ");
	scanf("%i",&n);

	for(i=1;i<n;i++)
	{	
		fflush(stdin);	

		printf("Ingrese el nombre de un contacto: ");
		gets(contactos.nombre,sizeof(BUFFER_SIZE), stdin);

		fflush(stdin);

		printf("\n");
		
		printf("Ingrese el numero de un contacto: ");
		scanf("%i",&contactos.numero);


	}

	for(i=1;i<n;i++)
	{
		printf("Contacto %i\n",i);
		printf("Nombre: %s",contactos.nombre);
		printf("Numero: %i",contactos.numero);
		printf("\n");
	}
		
}

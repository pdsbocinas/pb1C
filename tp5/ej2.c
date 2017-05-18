//2) Leer 30 números enteros e imprimir el mayor y el siguiente.

#include <stdio.h>

int main(){
	int i=0,num=0,max=0,sig=0;

	for(i=0;i<5;i++)
	{
		printf("Ingrese un numero: \n");
		scanf("%i", &num);
		
		if(num>max)
		{
			max=num;

		}else if(num>sig){
			
			sig=num;
		}
	}

	printf("El numero maximo es: %i y el siguiente: %i", max,sig);
	
}
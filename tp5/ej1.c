//1) Leer 30 números enteros e imprimir la suma de los números positivos.

#include <stdio.h>

int main(){
	int i=0,num=0,pares=0;

	for(i=0;i<5;i++)
	{
		printf("Ingrese un numero: \n");
		scanf("%i", &num);

		if(num % 2 == 0){
			pares+=num;
		}
	}

	printf("La suma de los numero pares es: %i", pares);
}
#include <stdio.h>
  
  int main(){
	
	int i, j, resultado=0;

	for(i=0;i<5;i++)
	{
		printf("Ingrese un numero: \n");
		scanf("%i", &j);
		
		while(j%2==0){
			resultado+=i;
		}

		printf("El numero es impar \n");
	}
	
  }
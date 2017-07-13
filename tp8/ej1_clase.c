#include <stdio.h>

int main(){

	int vector[100];
	int *ptr;
	int i;

	for (i = 0; i < 100; i++)
		vector[i] = 0;	
	
	ptr = &vector[0]; // es lo mismo que --> ptr = vector
//	*ptr = 11;
//	*(ptr+2) = 33;
//	*(ptr+3) = 44;
	
	printf ("\n   %p",ptr);
	printf ("\n   %p", &vector[0]);
	
	ptr = &vector[20];
	
	for(i=0;i<10;i++){
		//*(ptr+i) = 1;
		*ptr = 1;
		ptr++;
	}
	ptr = &vector[0];
	
	for(i=0;i < 30;i++){
		printf("\n %d",*ptr);
		ptr++;
	}

}
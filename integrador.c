/*Enunciado:
Una persona desea realizar un viaje de cabotaje al interior del país, con el fin de asistir a un Congreso de Investigación Tecnológica. Por disposición del Gobierno Nacional, los precios de los pasajes se encuentran congelados a cualquier destino. El valor del pasaje será de $ 1500 (mil quinientos pesos)
Para comprar los pasajes puede optar por tres compañías:
	•	LAN
	•	AEROLINEAS 
	•	AEROFLOT
Cada empresa en sus aeronaves posee las clases:
	•	Turista (sin recargo)
	•	Primera (10% de recargo)
	•	Negocios (25% de recargo)
La compra de un pasaje tiene una  tasa de embarque es del 4% del valor total del pasaje.
El excedente de equipaje es de 30$ por kilo, en caso de que este supere los 20kilos.
Y el cargo adicional, en caso de que desee desayuno y almuerzo es de 10% de adicional sobre el precio del pasaje.
Si abona en efectivo obtendrá un  10% de descuento,  mientras que, si abona con tarjeta tendrá un recargo del 20%, por gastos administrativos.
El programa debe calcular  e informar cuanto le costará a la persona realizar el viaje deseado con los detalles seleccionados.*/


#include <stdio.h>
#include <curses.h>

int main()
{
	int vuelo=0, pasaje=1500,comp=0,clase=0;
	
	printf("Ingrese una aerolinea: \n 1.LAN \n 2.Aerolineas \n 3.Aeroflot\n\n Seleccione: ");

	printf("\n");
	printf("\n");

	switch(comp)
	{
		case 1:
			printf("Usted eligio LAN\n");
			scanf("%i",&comp);
		break;

		case 2:
			printf("Usted eligio Aerolineas\n");
			scanf("%i",&comp);
		break;

		case 3:
			printf("Usted eligio Aeroflot\n");
			scanf("%i",&comp);
		break;
		
		default:
			printf("Error\n");
		break;
	}
	return 0;

	printf("Ingrese la clase: \n 1.turista \n 2.primera \n 3.negocios\n\n Seleccione: ");

	printf("\n");
	printf("\n");

	switch(clase)
	{
		case 1:
			printf("Usted eligio Turista\n");
			scanf("%i",&clase);
		break;

		case 2:
			printf("Usted eligio Turista\n");
			scanf("%i",&clase);
		break;

		case 3:
			printf("Usted eligio Turista\n");
			scanf("%i",&clase);
		break;

		default:
			printf("Error\n");
		break;
	}

	return 0;

}
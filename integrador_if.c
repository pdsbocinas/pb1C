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
	int vuelo=0, pasaje=1500,comp=0,clase=0,kilos=0,comida=0,pago=0;
	
	printf("\n");

	printf("Ingrese una aerolinea: \n 1.LAN \n 2.Aerolineas \n 3.Aeroflot\n\n Seleccione: ");
	scanf("%i",&comp);

	printf("\n");

	if(comp == 1)
	{
		printf("Usted a ingresado LAN");
	}else if(comp == 2){
		printf("Usted a ingresado Aerolineas");
	}else if(comp == 3){
		printf("Usted a ingresado Aeroflot");
	}else{
		printf("Error");
		printf("\n");
		printf("Ingrese una aerolinea: \n 1.LAN \n 2.Aerolineas \n 3.Aeroflot\n\n Seleccione: ");
		scanf("%i",&comp);
	}

	printf("\n");
	printf("\n");

	printf("Ingrese la clase: \n 1.turista \n 2.primera \n 3.negocios\n\n Seleccione: ");
	scanf("%i",&clase);
	
	printf("\n");
	
	if(clase == 1)
	{
		printf("Usted a ingresado clase TURISTA");
		
		printf("\n");
		
		printf("El valor del pasaje es: %i (no posee cargos)",pasaje);

	}else if(clase == 2){

		printf("Usted a ingresado clase PRIMERA");

		printf("\n");

		pasaje += pasaje*0.1;
		
		printf("El valor del pasaje es: %i",pasaje);
		
	}else if(clase == 3){

		printf("Usted a ingresado clase NEGOCIOS");

		printf("\n");

		pasaje += pasaje*0.1;
		
		printf("El valor del pasaje es: %i",pasaje);

	}else{

		printf("Error");
		return 0;
	}

	printf("\n");

	pasaje+=pasaje*0.04;

	printf("El pasaje tiene una tasa de embarque del 4porCiento, en total le saldria %i\n", pasaje);
	
	printf("\n");printf("\n");
	
	printf("Cuantos kilos de equipaje va llevar: ");
	scanf("%i",&kilos);

	if(kilos>20)
	{
		pasaje = pasaje+(kilos-20)*30;
		printf("El pasaje sale %i hasta el momento", pasaje);
	}

	printf("\n");
	printf("\n");

	printf("Desea agregarle desayuno y almuerzo: \n1.SI \n2.NO\n");
	scanf("%i",&comida);

	printf("\n");

	if(comida == 1){
		pasaje+=pasaje*0.1;
		printf("El pasaje hasta el momento incluyendo comida es de: %i\n",pasaje);
	}else if(comida == 2)
	{
		printf("No desea comida\n");
	}
	
	printf("\n");
	printf("\n");

	printf("Como desea abonar: \n1.Efectivo\n2.Tarjeta de Credito\n");
	scanf("%i",&pago);
	
	printf("\n");
	
	if(pago == 1)
	{	
		pasaje-=pasaje*0.10;
		printf("El pasaje le sale: %i", pasaje);
	}else if(pago == 2){
		pasaje+=pasaje*0.2;
		printf("El pasaje le sale: %i (se incluyen gastos administrativos)", pasaje);
	}

	printf("\n");
	printf("\n");

	printf("El total final es de: %i",pasaje);

	printf("\n");

	return 0;

}
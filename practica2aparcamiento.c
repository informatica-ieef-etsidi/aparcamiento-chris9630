//Desarrollador: Christian Garrido
#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

void main() {
	int plaza1 = 0, plaza2 = 0, plazam1 = 0, plazam2 = 0, i = 1; //Plazas de coche y de moto (con m al final)
	char matricula1[8], matricula2[8], matriculam2[8], matriculam1[8], matriculax[8];
	char opcion1, opcion2, opcion3;

	while (i == 1) {

		printf("Bienvenido al Parking\n Para reservar plaza pulse R\n Para abandonar plaza pulse A\n Para ver el estado pulse E\n Para buscar una matricula pulse B\n Para salir del programa pulse S\n");
		scanf_s("%c", &opcion1);
		getchar();
		system("cls");

		switch (opcion1) {

		case 'E':
		case 'e':

			printf("Para ver las plazas de coche pulse C\n Para ver las plazas de moto pulse M\n Pare ver todas pulse T\n");
			scanf_s("%c", &opcion2);
			switch (opcion2) {

			case 'c':
			case 'C':

				if (plaza1 == 0 && plaza2 == 0) {

					printf("Todas las plazas estan libres\n");
				}
				else if (plaza1 == 0 && plaza2 == 1) {

					printf("La plaza 1 de esta libre y la plaza 2 esta ocupada\n");
				}

				else if (plaza1 == 1 && plaza2 == 0) {

					printf("La plaza 1 esta ocupada y la plaza 2 esta libre\n");
				}
				else {
					printf("Todas las plazas estan ocupadas");
				}
				system("pause");
				break;

			case 'm':
			case 'M':

				if (plazam1 == 0 && plazam2 == 0 ) {

					printf("Todas las plazas estan libres\n");
				}
				else if (plazam1 == 0 && plazam2 == 1) {

					printf("La plaza 1 de esta libre y la plaza 2 esta ocupada\n");
				}

				else if (plazam1 == 1 && plazam2 == 0) {

					printf("La plaza 1 esta ocupada y la plaza 2 esta libre\n");
				}
				else {
					printf("Todas las plazas estan ocupadas");
				}
				system("pause");
				break;

			case 't':
			case 'T':

				if (plaza1 == 0 && plaza2 == 0) {

					printf("Las plazas de coches estan libres\n");

				}
				if (plazam1 == 0 && plazam2 == 0) {

					printf("Las plazas de motos estan libres\n");

				}
				if (plazam1 == 0 && plazam2 == 1) {

					printf("La plaza 1 de esta libre y la plaza 2 motos esta ocupada\n");
				}

				if (plazam1 == 1 && plazam2 == 0) {

					printf("La plaza 1 de motos esta ocupada y la plaza 2 de motos esta libre\n");
				}

				if (plaza1 == 0 && plaza2 == 1) {

					printf("La plaza 1 de coches de esta libre y la plaza 2 de coches esta ocupada\n");
				}

				if (plaza1 == 1 && plaza2 == 0) {

					printf("La plaza 1 de coches esta ocupada y la plaza 2 de coches estan libre\n");
				}
				if (plaza1 == 1 && plaza2 == 1 && plazam1 == 1 && plazam2 == 1){
					printf("Todas las plazas estan ocupadas");
				}
				system("pause");
			break;

			default:
				printf("La opcion no es valida\n");
				system("pause");
				break;
			}
			break;

		case 'R':
		case 'r':

			printf("Ha elegido la opcion de reservar una plaza\n Pulse M para reservar una plaza de moto\n Pulse C para reservar una plaza de coche\n");
			scanf_s("%c", &opcion3);
			getchar();

			switch (opcion3) {

			case 'c':
			case 'C':

				if (plaza1 == 1 && plaza2 == 1 && plazam1 == 1 && plazam2 == 1) {

					printf("Lo siento, las plazas estan ocupadas, vuelva en otro momento\n");
				}
				else if (plaza1 == 1 && plaza2 == 0) {

					printf("La plaza 2 esta libre, por favor introduzca su matricula\n");
					gets(matricula2);
					plaza2 = 1;
				}
				else if (plaza1 == 0 && plaza2 == 1) {
					printf("La plaza 1 esta libre, por favor introduzca su matricula\n");
					gets(matricula1);
					plaza1 = 1;

				}
				else {
					printf("Las dos plazas estan libres, introduzca su matricula\n");
					gets(matricula1);
					printf("Se le ha asignado la plaza 1\n");
					plaza1 = 1;
				}
				system("pause");
				break;

			case 'm':
			case 'M':
				if (plaza1 == 1 && plaza2 == 1 && plazam1 == 1 && plazam2 == 1) {

					printf("Lo siento, las plazas estan ocupadas, vuelva en otro momento\n");
				}
				else if (plazam1 == 1 && plazam2 == 0) {

					printf("La plaza 2 esta libre, por favor introduzca su matricula\n");
					gets(matriculam2);
					plazam2 = 1;
				}
				else if (plazam1 == 0 && plazam2 == 1) {
					printf("La plaza 1 esta libre, por favor introduzca su matricula\n");
					gets(matriculam1);
					plazam1 = 1;

				}
				else {
					printf("Las dos plazas estan libres, introduzca su matricula\n");
					gets(matriculam1);
					printf("Se le ha asignado la plaza 1\n");
					plazam1 = 1;
				}
				system("pause");
				break;

			default:
				printf("La opcion no es valida\n");
				system("pause");
				break;

			}
			break;

		case 'b':
		case 'B':
			printf("Introduzca la matricula de su vehiculo\n");
			gets(matriculax);

			if (strcmp(matriculax, matricula1) == 0) {
				printf("Su coche se encuentra en la plaza 1 de coches\n");
			}
			else if (strcmp(matriculax, matricula2) == 0) {
				printf("Su vehiculo se encuentra en la plaza 2 de coches\n");
			}
			else if (strcmp(matriculax, matriculam1) == 0) {
				printf("Su vehiculo se encuentra en la plaza 1 de motos\n");
			}
			else if (strcmp(matriculax,matriculam2) == 0) {
				printf("Su vehiculo se encuentra en la plaza 2 de motos\n");
			}
			else {
				printf("La matricula introducida no coincide con ninguna de los coches en las plazas\n");
			}
			system("pause");
			break;

		case 'a':
		case 'A':

			if (plaza1 == 0 && plaza2 == 0 && plazam1 == 0 && plazam2 == 0) {

				printf("No hay ningun vehiculo en las plazas\n");
			}

			else {
				printf("Introduzca el numero de matricula");
				gets(matriculax);

				if (strcmp(matriculax, matricula1) == 0) {

					printf("Su coche se encuentra en la plaza 1 de coches\n Gracias por la visita\n");
					plaza1 = 0;

				}
				else if (strcmp(matriculax, matricula2) == 0) {

					printf("Su coche se encuentra en la plaza 2 de coches\n Gracias por la visita\n");
					plaza2 = 0;

				}
				else if (strcmp(matriculax, matriculam1) == 0) {
					printf("Su moto se encuentra en la plaza 1 de motos\n Gracias por la visita\n");
					plazam1 = 0;
				}
				else if (strcmp(matriculax, matriculam2) == 0) {
					printf("Su moto se encuentra en la plaza 2 de motos\n Gracias por la visita\n");
					plazam2 = 0;
				}
				else {
					printf("La matricula que ha introducido no concuerda con ninguna de los coches en las plazas\n");
				}
			}
			system("pause");
			break;

		case 's':
		case 'S':
			printf("Ha decidido salir del programa\n");
			i = 0;
			system("pause");
			break;

		default:
			printf("La opcion no es valida\n");
			system("pause");
			break;
		}
	system("cls");
	}
	system("pause");

}
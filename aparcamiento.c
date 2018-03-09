// Alumno: Christian Garrido
#include <stdio.h>
#include <stdlib.h>

void main() { // Practica 1 del programa de aparcamiento, reservar, abandonar y ver el estado de una plaza
	int plaza1 = 0, plaza2 = 0, i;
	char matricula1[8], matricula2[8], matriculax[8];
	char opcion1, opcion2;

	printf("Bienvenido al Parking\n Para reservar plaza pulse R\n Para abandonar plaza pulse A\n Para ver el estado pulse E\n");
	scanf_s("%c", &opcion1);
	system("cls");

		switch (opcion1) {
		case 'E':
		case 'e':

			if (plaza1 == 0 && plaza2 == 0) {

				printf("Todas las plazas estan libres\n");
			}
			else if (plaza1 == 0 && plaza2 == 1) {

				printf("La plaza 1 esta libre y la plaza 2 esta ocupada\n");
			}

			else if (plaza1 == 1 && plaza2 == 0) {

				printf("La plaza 1 esta ocupada y la plaza 2 esta libre\n");
			}
			else {
				printf("Todas las plazas estan ocupadas");
			}
			break;

		case 'R':
		case 'r':
			printf("Ha elegido la opcion de reservar una plaza\n");

			if (plaza1 == 1 && plaza2 == 1) {

				printf("Lo siento, las plazas estan ocupadas, vuelva en otro momento\n");
			}
			else if (plaza1 == 1 && plaza2 == 0) {

				printf("La plaza 2 esta libre, por favor introduzca su matricula\n");
				scanf_s("%s", matricula2, 8);
				plaza2 = 1;
			}
			else if (plaza1 == 0 && plaza2 == 1) {
				printf("La plaza 1 esta libre, por favor introduzca su matricula\n");
				scanf_s("%s", matricula1, 8);
				plaza1 = 1;

			}
			else {
				printf("Las dos plazas estan libres, introduzca su matricula\n");
				scanf_s("%s", matricula1, 8);
				printf("Se le ha asignado la plaza 1\n");
				plaza1 = 1;
			}
			break;

		case 'a':
		case 'A':

			if (plaza1 == 1 && plaza2 == 2) {

				printf("No hay ningun vehiculo en las plazas\n");
			}

			else
				printf("Introduzca el numero de matricula");
				scanf_s("%s", matriculax, 8);

			if (matriculax == matricula1) {

				printf("Su vehiculo se encuentra en la plaza 1\n");
				plaza1 = 0;

			}
			else if (matriculax == matricula2) {

				printf("Su vehiculo se encuentra en la plaza 2\n");
				plaza2 = 0;

			}
			else {
				printf("La matricula que ha introducido no concuerda con ninguna de los coches en las plazas\n");
			}
			break;

		default:
			printf("La opcion no es valida\n");

			break;
		}

	system("pause");

}
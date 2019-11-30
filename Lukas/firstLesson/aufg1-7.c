/* Datei aufg1-7.c */
/* Umrechnung von Winkelmaﬂ in Bogenmaﬂ */

#include <stdlib.h>
#include <stdio.h>

int main(void){
	float winkel, bogen;
	float faktor=2*3.141592654/360;
	printf("Geben Sie den Winkel im Winkelmass ein: ");
	scanf("%f", &winkel);
	bogen = winkel*faktor;
	printf("\nEin Winkel von%fGrad entspricht %f rad\n\n", winkel, bogen);
}




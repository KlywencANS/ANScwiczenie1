#include <stdlib.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	double przychod, kosztaUzyskania;
	
	printf("Podaj przychod");
	scanf("%lf",&przychod);
	printf("\nPodaj koszta uzyskania przychodu");
	scanf("%lf",&kosztaUzyskania); 
	printf("\n%lf",kosztaUzyskania);
	
	double dochod = przychod - kosztaUzyskania;
	double skladkaZUS;
	scanf("%lf",&skladkaZUS);
	double dochodPoOdlZUS = dochod - skladkaZUS;
	printf("\n%lf",dochodPoOdlZUS);
	double skladkaZdrowotna;
	scanf("%lf",&skladkaZdrowotna);
	if (dochod > 85528){
		double podatekbezodjecia = dochod*0.18;
		double podatekNalezny = podatekbezodjecia - 556.02;
	} else {
		
	}
	
	
	return 0;
	
	
	
	
}

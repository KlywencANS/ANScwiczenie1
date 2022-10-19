#include <stdlib.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	double przychod, kosztaUzyskania, podatekNalezny;
	
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
	if (dochod < 85528){
		double podatekbezodjecia = dochod*0.18;
		podatekNalezny = podatekbezodjecia - 556.02;
	} else {
		double nadwyzka;
		double nadwyzka2;
		dochod - 85528 = nadwyzka;
		double pelnypodatek;
		pelnypodatek = 85528-nadwyzka;
		podatekNalezny = dochod - pelnypodatek;
		printf("\npodatek wynosi",pelnypodatek);
	}
	double podatekMinusSkladZdrow;
	double zaliczkaPodatek;
	podatekMinusSkladZdrow = podatekNalezny - skladkaZdrowotna;
	printf("\n podaj podatek");
	scanf("%lf",&zaliczkaPodatek);
	podatekNalezny = podatekMinusSkladZdrow - zaliczkaPodatek;
	printf("\npodatek wynosi", podatekNalezny);
	double podatekNaleznyZaokr;
	int podatekNaleznyInt = podatekNalezny;
	double roznica = podatekNalezny - podatekNaleznyInt;
	if(roznica<0.5){
		podatekNaleznyZaokr = podatekNaleznyInt;
	}
	else {
		podatekNaleznyZaokr = podatekNaleznyInt++;
	
	}
	if (podatekNalezny>zaliczkaPodatek){
		podatekNalezny = podatekNalezny-zaliczkaPodatek;
		podatekNalezny*-1;
	} else{
		
	}
	




	
	

	
	
	
	
	return 0;
	
	
	
	
}

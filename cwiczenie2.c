#include <stdlib.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double x;
	printf("podaj liczbe całkowitą");
	scanf("%lf",&x);
	
	if (x>=0){
		printf("Liczba jest nieujemna");
	} else {
		printf("liczba jest ujemna");
	}
	
	return 0;
	
	
	
	
}

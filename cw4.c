#include <stdlib.h>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int wczytana;
    printf("wczytywanie liczby");
    scanf("%d", &wczytana);
        
		int l1;
        int l2;
        int l3;

    
    for(int i=0; i<=wczytana; i++){
        int zmienna;
        scanf("%d", &zmienna);
        if (zmienna==0){
            l3++;
        }
        if(zmienna<0){
            l2 = l2+zmienna;
        }
        if(zmienna>0)
        l3 = l2+zmienna;
    }
    printf("liczba zer",l1);
    printf("suma dodatnich",l2);
    printf("suma ujemnych",l3);
    
    return 0;
}

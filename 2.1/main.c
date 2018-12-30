#include<limits.h>
#include <stdlib.h>
#include <stdio.h>
#include<stdbool.h>


bool isSorted(int*tab, int s) {

    int i;
    for (i = 0; i < s - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            return 0;
          }
        }
    return 1;
    }


int main() {

    int tab[5];

    printf("Podaj wartosc tablicy:\n");
    scanf("%d %d %d %d %d", &tab[0], &tab[0], &tab[0], &tab[0], &tab[0]);

    if (isSorted(tab, 5) == 0) {
        printf("Tablica jest niemalejaca\n");

    } else {

        printf("Tablica nie jest niemalejaca\n");
    }
    return 0;
}


//2.1. Utworzyć osobną metodę bool IsSorted(int *, int) realizującą zadanie 1.3
// (UWAGA - w języku C niedostępny jest typ bool z wartościami true i false,
// zamiast niego należy użyć int i wartości 1 i 0)
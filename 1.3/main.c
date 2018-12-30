#include <stdio.h>
#include<stdlib.h>
#include<limits.h>

int main() {

    int tab[5];
    int x;
    int i;

    printf("Podaj wartosci tablicy:\n");
    scanf("%d %d %d %d %d", &tab[0], &tab[1], &tab[2], &tab[3], &tab[4]);

    for(i=0, x=0;(i<sizeof(tab)/sizeof(tab[0])-1);i++) {
        if (tab[i] > tab[i + 1]) {
            x = 1;
        }
    }
    if(x==1){

        printf("Tablica nie jest niemalejaca\n");
    }
    else
    {
    printf("Tablica jest niemalejaca\n");
    }

    return 0;
}

//1.3 Napisać algorytm sprawdzający, czy tablica jest posortowana w kolejności niemalejącej.
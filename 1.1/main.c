#include <stdio.h>
#include<stdlib.h>
#include<limits.h>
int main() {

    int tab[5];

    printf("Podaj wartosci tablicy:\n");
    scanf("%d %d %d %d %d",&tab[0],&tab[1],&tab[2],&tab[3],&tab[4]);
    printf("%d %d %d %d %d",tab[0],tab[1],tab[2],tab[3],tab[4]);
    printf("\n");

    int max=INT_MIN;

    for (int i=0;i<5;i++){
        if (tab[i] >max){
            max=tab[i];
        }
    }

    printf("Najwieksza: %d", max);
    printf("\n");


    return 0;
}

//1.1. Utworzyć 5-cio elementową tablicę typu int. Pobrać od użytkownika 5 elementów i dodać je do tablicy.
// Następnie wyświetlić największą liczbę z tablicy (algorytm do samodzielnej implementacji).
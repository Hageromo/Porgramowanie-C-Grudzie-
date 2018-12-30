#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

void printTab(int *tab, int size) {
    printf("\nElements:");
    for (int i = 0; i < size; i++) {
        printf("\n%d", tab[i]);
    }
}

int main() {

    int n;
    int nUjemne = 0;

    printf("Podaj dlugosc tablicy: ");
    scanf("%d", &n);

    int *tab = malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        printf("Podaj %d element: ", (i+1));
        int x;
        scanf("%d", &x);
        tab[i] = x;
        if (x < 0) {
            nUjemne++;
        }
    }

    int *tabUjemne = malloc(nUjemne * sizeof(int));

    int j = 0;
    for (int i = 0; i < n; i++) {
        if (tab[i] < 0) {
            tabUjemne[j++] = tab[i];
        }
    }


    printTab(tab, n);
    printTab(tabUjemne, nUjemne);

    free(tab);
    free(tabUjemne);

    return 0;
}

//4.2.Pobrać od użytkownika liczbę n.Zaalokować pamięć na n elementów int i pobrać je od użytkownika.Następnie
//zaalokować pamięć i utworzyć tablicę, w której będą tylko UJEMNE wartości z pierwszej tablicy.
// Na koniec zwolnić
//pamięć na obie tablice.
#include <stdio.h>
#include<stdlib.h>
#include<limits.h>

int main() {

    int tab[5];
    int i;
    printf("Podaj wartosci tablicy:\n");
    scanf("%d %d %d %d %d", &tab[0], &tab[1], &tab[2], &tab[3], &tab[4]);


    printf("Tablica od poczatku:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", tab[i]);
    }
    printf("Tablica od konca:\n");
    for (i = 4; i >= 0; i--)
    {
        printf("%d\n", tab[i]);
    }


    return EXIT_SUCCESS;
}


//1.2.Wyświetlić w pętli tablice z zadania 1.1 od początku i od końca(dwie pętle)
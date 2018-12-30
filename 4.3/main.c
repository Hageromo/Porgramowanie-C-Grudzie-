#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool AreArraysidentical(int *a1,int s1,int *a2,int s2){

    int i;
    if (s1 != s2)
    {
        return 0;
    }
    for (i = 0; i < s1; i++)
    {
        if (a1[i] != a2[i])
        {
            return 0;
        }
    }
    return 1;

}

int main() {

    int n1;
    int *tab1;
    int n2;
    int *tab2;


    printf("Podaj dlugosc pierwszej tablicy tablicy: ");
    scanf("%d", &n1);

    tab1 = malloc(sizeof(int) * n1);

    for (int i = 0; i < n1; i++) {
        printf("Podaj %d element pierwszej tablicy: ", i);
        scanf("%d", &tab1[i]);
    }


    printf("Podaj dlugosc drugiej tablicy tablicy: ");
    scanf("%d", &n2);

    tab2 = malloc(sizeof(int) * n2);

    for (int i = 0; i < n2; i++) {
        printf("Podaj %d element drugiej tablicy: ", i);
        scanf("%d", &tab2[i]);
    }


    if (AreArraysidentical(tab1, n1, tab2, n2))
        printf("Tablice sa identyczne.\n");
    else
        printf("Tablice roznią sie.\n");

    free(tab1);
    free(tab2);

    return 0;
}

//4.3. Napisać metodę bool AreArraysldentical(int * al, int sl, int * a2, int s2) zwracającą informację, czy dwie tablice
//podane jako parametr są identyczne, tj.czy mają taką samą długość i czy na każdym indeksie występuje taki sam
//element.
#include <stdio.h>
#include <stdlib.h>
#include<limits.h>

void printBackwards(int *tab, int s) {

    int i;
    for (i = s - 1; i >= 0; i--) {
        printf("%d\n", tab[i]);
    }


}

int main() {
    int n;

    printf("Podaj dlugosc tablicy: ");
    scanf("%d", &n);


    int *tab = malloc(n * sizeof(int));


    printf("\n");
    for (int i = 0; i < n; i++) {
        printf("Podaj %d element: ", (i + 1));
        scanf("%d", &tab[i]);
    }

    printBackwards(tab, n);

    free(tab);

    return 0;
}

//4.1. Pobrać od użytkownika liczbę n.
// Zaalokować pamięć na n elementów int i pobrać je od użytkownika. Wykonać na
//niej metodę printBackwards z 2.2.



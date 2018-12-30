#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    int n;
    int c;
    int d;
    int swap;


    printf("Wpisz liczbe elementow\n");
    scanf("%d", &n);

    int tab[n];

    printf("Wpisz %d liczby\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &tab[c]);

    for (c = 0 ; c < n - 1; c++)
    {
        for (d = 0 ; d < n - c - 1; d++)
        {
            if (tab[d] > tab[d+1])
            {
                swap = tab[d];
                tab[d] = tab[d+1];
                tab[d+1] = swap;
            }
        }
    }

    printf("Posortowane liczby:\n");

    for (c = 0; c < n; c++)
        printf("%d\n", tab[c]);

    return 0;
}

//2.5. Zaimplementować algorytm sortowania bąbelkowego (w funkcji main(), nie ma potrzeby tworzenia dodatkowej
//funkcji).Algorytm powinien posortować dowolnie dużą tablicę w kolejności niemalejącej.
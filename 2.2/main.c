#include <stdio.h>
#include<stdlib.h>
#include<limits.h>

void printBackwards(int*tab,int s){

    int i;
    for (i = s-1; i>=0 ; i--){
        printf("%d\n", tab[i]);
    }


}

int main(){

    int tab[5];

    printf("Podaj wartosc tablicy:\n");
    scanf("%d %d %d %d %d", &tab[0], &tab[1], &tab[2], &tab[3], &tab[4]);


    printBackwards(tab, sizeof(tab) / sizeof(tab[0]));



    return 0;
}

//2.2. Utworzyć metodę void printBackwards(int *a, int s) służącą do wypisania tablicy OD KOŃCA
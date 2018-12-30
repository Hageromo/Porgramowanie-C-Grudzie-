#include <stdio.h>
#include<stdlib.h>
#include<limits.h>


void printDots(int*tab,int s){

    int i;
    int x;

    for(i=0;i<s;i++)
    {
        for(x=0;x < tab[i];x++)
        {
            printf(".");
        }
        printf("\n");
    }


}

int main() {

    int tab[]={1,2,3,4,5};

    printDots(tab, sizeof(tab)/sizeof(tab[0]));


    return 0;
}

//2.3 Utworzyć metodę printDots(int *a, int s)
// wyświetlającą w nowych liniach tyle kropek,ile znajduje się w danym
//elemencie tablicy.
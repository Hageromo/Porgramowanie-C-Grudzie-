#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int sum(int*tab,int s){

    int i;
    int x;


    for(i=0,x=0;i<s;i++)
    {
        x = x + tab[i];

    }

    return x;

}




int main() {

    int tab[]={1,1,2,1,1};


    printf("%d",(sum(tab,sizeof(tab)/sizeof(tab[0]))));




    return 0;
}

////2.4. Utworzyć metodę int Sum(int *a, int s) liczącą sumę elementów tablicy.
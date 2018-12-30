#include <stdio.h>
#include <string.h>

int getLenght(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main()

{

    char str[1000];

    printf("Podaj slowo:\n");
    scanf("%s",str);
    printf("String ma dlugosc: %d", getLenght(str));

    return 0;

}

//3.1 Napisać metodę int getLength(char *str) ,
// w której WŁASNORECZNIE (nie wolno korzystać z metody strlen() )
//przeliczony zostanie rozmiar łańcucha
// (bez null - terminatora).Dla przykładu dla „Hello!" wynik powinien wynosić 6.
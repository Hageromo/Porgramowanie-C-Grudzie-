#include <stdio.h>
#include <stdlib.h>

int getLength(char *str) {
    int i = 0;


    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

char *reverseString(char *str) {
    int l = getLength(str);
    char *str2 = malloc((l + 1) * sizeof(char));

    for (int i = 0; i < l; i++) {
        str2[i] = str[l - 1 - i];
    }
    str2[l] = '\0';

    return str2;
}


int main() {

    char str[1000];


    printf("Napisz cos:");
    scanf("%[^\n]", str);


    char *rstring = reverseString(str);

    printf("String od konca: %s", rstring);

    free(rstring);

    return 0;
}



//4.4. Napisać metodę char * reverseString(char*s), która ZWRÓCI (a nie wypisze!) string, który jest odwróconym
//stringiem przekazanym jako pierwszy parametr.Funkcja zaalokuje pamięć na nowy łańcuch i go zwróci. (cały
//algorytm należy zaimplementować samodzielnie).Należy go następnie „przechwycić" w funkcji main, aby pamięć na
//koniec wyczyścić
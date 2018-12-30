#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include <memory.h>

bool containsDigits(char *str) {
    for (int i = 0; i < strlen(str) - 1; i++) {
        if ('0' <= str[i] && str[i] <= '9') {
            return true;
        }
    }

    return false;
}


int main() {

    char str[1000];

    printf("Podaj string: ");
    scanf("%s", str);

    if (containsDigits(str)) {
        printf("String ma w sobie cyfry");
    } else {
        printf("String nie ma w sobie cyfr");
    }

    return 0;
}


//3.3.Napisać metodę bool containsDigits(char * str), która zwróci informację, czy w danym stringu znajduje się
//jakakolwiek cyfra.Dla przykładu : „asdfgzxcv" -> false, „asdf5asdf" -> true
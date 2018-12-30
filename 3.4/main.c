#include <stdio.h>
#include<stdlib.h>
#include <stdbool.h>
#include <memory.h>

int getLength(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        i++;
    }
    return i;
}

void Reverse (char *str) {
    for (int i = getLength(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("%c", '\n');
}

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

    printf("Podaj strng:\n");


    scanf("%s",str);

    printf("String ma dlugosc: %d\n", getLength(str));

    Reverse(str);

    if (containsDigits(str)) {
        printf("String ma w sobie cyfry");
    } else {
        printf("String nie ma w sobie cyfr");
    }



    return 0;
}

//3.4. Pobrać od użytkownika łańcuch znaków (dowolna metoda). Przekazać go do każdej z metod z 3. części zadań.
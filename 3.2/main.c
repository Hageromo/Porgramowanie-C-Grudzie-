#include <stdio.h>
#include <stdbool.h>

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

int main() {
    char str[1000];
    printf("Podaj string: ");
    scanf("%s", str);
    Reverse(str);
}


//3.2. Napisać metodę void Reverse (char *str)
//, która wypisze łańcuch znaków od końca (zakaz używania strlen,
//można uzyć metodę z zadania 3.1.)
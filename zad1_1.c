#include <stdio.h>
#include <stdbool.h>

int main() {
    int rok_urodzenia = 2005;
    float wzrost = 3.14f;     // f wskazujena float
    char znak = 'A';
    bool prawko = true;
    int wiek;

printf("Podaj rok: ");
scanf("%d", &rok_urodzenia);

printf("Podaj wzrost: ");
scanf("%f", &wzrost);


printf("Jestem urodzony w %d roku, mam %f m wzrostu, mam prawo jazdy", rok_urodzenia, wzrost);

    printf("Zmienna 'rok_urodzenia' ma wartość: %d i zajmuje %zu bajty\n", rok_urodzenia, sizeof(rok_urodzenia));
    printf("Zmienna 'wzrost' ma wartość: %.2f i zajmuje %zu bajty\n", wzrost, sizeof(wzrost));
    printf("Zmienna 'znak' ma wartość: %c i zajmuje %zu bajty\n", znak, sizeof(znak));
    printf("Zmienna 'prawko' ma wartość: %d (true=1, false=0) i zajmuje %zu bajt\n", prawko, sizeof(prawko));

    return 0;
}

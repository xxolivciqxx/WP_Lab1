#include <stdio.h>

// Zmienna globalna – istnieje przez cały czas działania programu
int licznik = 0;

void funkcja() {
    // Zmienna lokalna – tworzona na nowo przy każdym wywołaniu funkcji
    int licznik_funkcji = 5;
    printf("W funkcji: licznik_funkcji = %d\n", licznik_funkcji);
}

int main() {
    printf("W main (globalna): licznik = %d\n", licznik);
    funkcja();
    printf("Po powrocie do main: licznik = %d\n", licznik);
    return 0;
}
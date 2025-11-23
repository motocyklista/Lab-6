#include <stdio.h>

int main() {
    int n;

    printf("Podaj liczbe elementow tablicy: ");
    scanf("%d", &n);

    if(n < 2) {
        printf("Blad! Tablica musi miec przynajmniej 2 elementy.\n");
        return 1;
    }

    int tab[n];

    printf("Podaj %d elementow tablicy: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Obliczanie pierwszej różnicy między sąsiadami i przypisanie jej do max_diff
    int diff = tab[1] - tab[0];
    if(diff < 0) diff = -diff;
    int max_diff = diff;

    // Pętla po wszystkich sąsiadach, obliczanie różnic bezwzględnych
    printf("\nRoznice sasiadow:\n");
    for(int i = 1; i < n; i++) {
        diff = tab[i] - tab[i-1];
        if(diff < 0) diff = -diff;  // zamiana na wartość dodatnią

        printf("|%d - %d| = %d\n", tab[i], tab[i-1], diff);
    // Aktualizacja największej różnicy, jeśli obecna jest większa
        if(diff > max_diff) {
            max_diff = diff;
        }
    }

    printf("\nWynik: MAX_DIFF = %d\n", max_diff);

    return 0;
}

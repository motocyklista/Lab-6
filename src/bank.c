#include <stdio.h>

#define LICZBA_KONT 100

int main() {
    double saldo[LICZBA_KONT] = {0};  // wszystkie konta na początku mają saldo 0
    int command;

    printf("Symulacja aplikacji bankowej.\n");
    printf("Polecenia: 0 - koniec, 1 - DEPOSIT, 2 - WITHDRAW, 3 - SHOW\n");

    while(1) {
        printf("\nPodaj polecenie: ");
        scanf("%d", &command);

        if(command == 0) {
            printf("Koniec programu.\n");
            break;
        }

        int konto;
        double kwota;

        switch(command) {
            case 1: // DEPOSIT
                printf("Podaj numer konta (0-%d) i kwote: ", LICZBA_KONT-1);
                scanf("%d %lf", &konto, &kwota);

                if(konto < 0 || konto >= LICZBA_KONT || kwota < 0) {
                    printf("Bledne dane.\n");
                    break;
                }

                saldo[konto] += kwota;
                printf("DEPOSIT OK. Konto %d nowe saldo: %.2lf\n", konto, saldo[konto]);
                break;

            case 2: // WITHDRAW
                printf("Podaj numer konta (0-%d) i kwote: ", LICZBA_KONT-1);
                scanf("%d %lf", &konto, &kwota);

                if(konto < 0 || konto >= LICZBA_KONT || kwota < 0) {
                    printf("Bledne dane.\n");
                    break;
                }

                if(saldo[konto] >= kwota) {
                    saldo[konto] -= kwota;
                    printf("WITHDRAW OK. Konto %d nowe saldo: %.2lf\n", konto, saldo[konto]);
                } else {
                    printf("WITHDRAW ERROR: za malo srodkow na koncie %d\n", konto);
                }
                break;

            case 3: // SHOW
                printf("Podaj numer konta (0-%d): ", LICZBA_KONT-1);

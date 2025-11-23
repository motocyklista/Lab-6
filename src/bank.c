#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define LICZBA_KONT 100

int main() {
    double saldo[LICZBA_KONT] = {0};  // wszystkie konta zaczynają z saldem 0
    int command;

    printf("Symulacja aplikacji bankowej.\n");
    printf("Polecenia: 0 - zakoncz program, 1 - wplata (DEPOSIT), 2 - wyplata (WITHDRAW), 3 - wyswietlenie salda (SHOW)\n");

    while (1) {
        printf("\nPodaj polecenie: ");
        scanf("%d", &command);

        if (command == 0) {
            printf("Koniec programu.\n");
            break;
        }

        int konto;
        double kwota;

        switch (command) {
            case 1: // DEPOSIT
                printf("Podaj numer konta (0-%d) i kwote: ", LICZBA_KONT - 1);
                scanf("%d %lf", &konto, &kwota);

                if (konto < 0 || konto >= LICZBA_KONT || kwota < 0) {
                    printf("Bledne dane.\n");
                    break;
                }

                saldo[konto] += kwota;
                printf("DEPOSIT OK. Konto %d nowe saldo: %.2lf\n", konto, saldo[konto]);
                break;

            case 2: // WITHDRAW
                printf("Podaj numer konta (0-%d) i kwote: ", LICZBA_KONT - 1);
                scanf("%d %lf", &konto, &kwota);

                if (konto < 0 || konto >= LICZBA_KONT || kwota < 0) {
                    printf("Bledne dane.\n");
                    break;
                }

                if (saldo[konto] >= kwota) {
                    saldo[konto] -= kwota;
                    printf("WITHDRAW OK. Konto %d nowe saldo: %.2lf\n", konto, saldo[konto]);
                } else {
                    printf("WITHDRAW ERROR: za malo srodkow na koncie %d\n", konto);
                }
                break;

            case 3: // SHOW
                printf("Podaj numer konta (0-%d): ", LICZBA_KONT - 1);
                scanf("%d", &konto);

                if (konto < 0 || konto >= LICZBA_KONT) {
                    printf("Bledne dane.\n");
                    break;
                }

                printf("SHOW: konto %d saldo = %.2lf\n", konto, saldo[konto]);
                break;

            
        } 
    } 

    return 0;
}

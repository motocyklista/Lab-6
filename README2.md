

# Program: "Symulacja aplikacji bankowej"

Program w języku C, który symuluje podstawowe operacje bankowe na 100 kontach. Użytkownik może wpłacać środki (DEPOSIT), wypłacać środki (WITHDRAW) lub sprawdzać saldo (SHOW) dla wybranego konta.


---

## Informacje techniczne

* **Język:** C
* **Edytor:** Microsoft Visual Studio Code
* **Kompilator:** Clang (`clang -Wall`)
* **System:** Windows

> 💡 Program skompilowany przy użyciu kompilatora Clang. Korzystałem z edytora MS Visual Studio Code.

---

## Kompilacja

Aby skompilować program, w terminalu uruchom:

```bash
clang -Wall bank.c
```

---

## Uruchomienie programu

Po kompilacji uruchom plik wykonywalny:

```bash
bank.exe
```

Program poprosi o podanie poleceń numerycznych:

* `0` – zakończenie programu
* `1` – wpłata (`DEPOSIT`)
* `2` – wypłata (`WITHDRAW`)
* `3` – wyświetlenie salda (`SHOW`)

Dla poleceń 1 i 2 należy podać numer konta (0–99) oraz kwotę (≥0).
Dla polecenia 3 należy podać numer konta.

Program wypisuje komunikaty o powodzeniu operacji lub błędach, np. za mało środków lub niepoprawny numer konta.

---

### Przykłady działania

```
C:\Users\X\Desktop\homework>bank.exe
Podaj polecenie: 1
Podaj numer konta (0-99) i kwote: 99 50
DEPOSIT OK. Konto 99 nowe saldo: 50.00
```

```
C:\Users\X\Desktop\homework>bank.exe
Podaj polecenie: 2
Podaj numer konta (0-99) i kwote: 99 30
WITHDRAW OK. Konto 99 nowe saldo: 20.00
```

```
C:\Users\X\Desktop\homework>bank.exe
Podaj polecenie: 3 99
Podaj numer konta (0-99): SHOW: konto 99 saldo = 20.00
```

```
C:\Users\X\Desktop\homework>bank.exe
Podaj polecenie: 0
Koniec programu.
```

---

## Działanie programu

1. Program prosi o podanie numeru polecenia (`0-3`).
2. W zależności od polecenia:

   * `1` – wczytuje numer konta i kwotę, dokonuje wpłaty.
   * `2` – wczytuje numer konta i kwotę, dokonuje wypłaty jeśli środki wystarczą.
   * `3` – wczytuje numer konta i wyświetla saldo.
3. Program sprawdza poprawność numeru konta oraz kwoty.
4. Po każdej operacji wypisuje komunikat o wyniku.
5. Pętla powtarza się do momentu wybrania polecenia `0`, które kończy program.

---

## 👤 Autor

* **Imię / Pseudonim:** Piotr
* **Rok:** 2025
* **Środowisko:** Visual Studio Code + Clang

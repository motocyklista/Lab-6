# Program: "Największa bezwzględna różnica"
Program napisany w języku C, który wczytuje n liczb całkowitych do tablicy o rozmiarze podanym przez użytkownika (VLA - Variable Lenght Array), a następnie oblicza największą bezwzględną różnicę między dwoma sąsiednimi elementami tablicy.

---

## Informacje techniczne
- **Język:** C  
- **Edytor:** Microsoft Visual Studio Code  
- **Kompilator:** Clang (`clang -Wall`)  
- **System:** Windows  

> 💡 Program skompilowany przy użyciu kompilatora Clang. Korzystałem z edytora MS Visual Studio Code.

---

## Kompilacja
Aby skompilować program, w terminalu uruchom:

```bash
clang -Wall bezwzgledna.c
````


---
## Uruchomienie programu
Po kompilacji uruchom plik wykonywalny:

```bash
bezwzgledna.exe
```
Program poprosi o podanie cyfr zgodnie z wytycznymi programu i zakończenie go enterem. Następnie zwróci wynik:

---

### Przykłady działania

```
C:\Users\X\Desktop\homework>bezwzgledna.exe
Podaj liczbe elementow tablicy: 1
Blad! Tablica musi miec przynajmniej 2 elementy.
```
```
C:\Users\X\Desktop\homework>bezwzgledna.exe
Podaj liczbe elementow tablicy: 6
Podaj 6 elementow tablicy: 1 4 6 8 9 2

Roznice sasiadow:
|4 - 1| = 3
|6 - 4| = 2
|8 - 6| = 2
|9 - 8| = 1
|2 - 9| = 7

Wynik: MAX_DIFF = 7
```

---

## Działanie programu

1. Program prosi o podanie liczby elementów tablicy.
2. Wczytuje elementy tablicy od użytkownika.
3. Oblicza różnice bezwzględne między sąsiadującymi elementami.
4. Wypisuje wszystkie różnice i aktualizuje największą.
5. Na końcu wypisuje największą różnicę (`MAX_DIFF`).

---
## 👤 Autor

* **Imię / Pseudonim:** Piotr
* **Rok:** 2025
* **Środowisko:** Visual Studio Code + Clang

```

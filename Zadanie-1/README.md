# Program: "System bankowy - Harmonogram Spłat Kredytu (Raty Malejące)"
Program w języku C, który symuluje harmonogram spłat kredytu z ratami malejącymi. Użytkownik podaje kwotę kredytu, liczbę rat oraz oprocentowanie roczne, a program wyświetla harmonogram spłat miesiąc po miesiącu z podziałem na część kapitałową i odsetkową.

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
clang -Wall raty.c
```

---

## Uruchomienie programu

Po kompilacji uruchom plik wykonywalny:

```bash
raty.exe
```

Program poprosi o podanie kolejno:

1. Kwoty kredytu (double, np. 12000).
2. Liczby rat (int, np. 12).
3. Oprocentowania rocznego (double, np. 0.10 dla 10%).

Po wprowadzeniu danych program wyświetli harmonogram spłat w formacie:

  Miesiac X: Rata SUMA (K: KAPITAŁ + O: ODSETKI) | Pozostalo: RESZTA

---

### Przykłady działania

```
C:\Users\X\Desktop\homework>raty.exe
Podaj kwote kredytu: 12000
Podaj liczbe rat: 4
Podaj oprocentowanie roczne (np. 0.10 dla 10%): 0.10

--- Harmonogram splat rat malejacych ---
Miesiac 1: Rata 3100.00 (K: 3000.00 + O: 100.00) | Pozostalo: 9000.00
Miesiac 2: Rata 3075.00 (K: 3000.00 + O: 75.00) | Pozostalo: 6000.00
Miesiac 3: Rata 3050.00 (K: 3000.00 + O: 50.00) | Pozostalo: 3000.00
Miesiac 4: Rata 3025.00 (K: 3000.00 + O: 25.00) | Pozostalo: 0.00

```

```
C:\Users\X\Desktop\homework>raty.exe
Podaj kwote kredytu: 1000
Podaj liczbe rat: 10
Podaj oprocentowanie roczne (np. 0.10 dla 10%): 0.10

--- Harmonogram splat rat malejacych ---
Miesiac 1: Rata 108.33 (K: 100.00 + O: 8.33) | Pozostalo: 900.00
Miesiac 2: Rata 107.50 (K: 100.00 + O: 7.50) | Pozostalo: 800.00
Miesiac 3: Rata 106.67 (K: 100.00 + O: 6.67) | Pozostalo: 700.00
Miesiac 4: Rata 105.83 (K: 100.00 + O: 5.83) | Pozostalo: 600.00
Miesiac 5: Rata 105.00 (K: 100.00 + O: 5.00) | Pozostalo: 500.00
Miesiac 6: Rata 104.17 (K: 100.00 + O: 4.17) | Pozostalo: 400.00
Miesiac 7: Rata 103.33 (K: 100.00 + O: 3.33) | Pozostalo: 300.00
Miesiac 8: Rata 102.50 (K: 100.00 + O: 2.50) | Pozostalo: 200.00
Miesiac 9: Rata 101.67 (K: 100.00 + O: 1.67) | Pozostalo: 100.00
Miesiac 10: Rata 100.83 (K: 100.00 + O: 0.83) | Pozostalo: 0.00

```

```
C:\Users\X\Desktop\homework>raty.exe
Podaj kwote kredytu: 100
Podaj liczbe rat: 2
Podaj oprocentowanie roczne (np. 0.10 dla 10%): 0.40

--- Harmonogram splat rat malejacych ---
Miesiac 1: Rata 53.33 (K: 50.00 + O: 3.33) | Pozostalo: 50.00
Miesiac 2: Rata 51.67 (K: 50.00 + O: 1.67) | Pozostalo: 0.00

```

```
C:\Users\X\Desktop\homework>raty.exe
Podaj kwote kredytu: 34000
Podaj liczbe rat: 24
Podaj oprocentowanie roczne (np. 0.10 dla 10%): 0.50

--- Harmonogram splat rat malejacych ---
Miesiac 1: Rata 2833.33 (K: 1416.67 + O: 1416.67) | Pozostalo: 32583.33
Miesiac 2: Rata 2774.31 (K: 1416.67 + O: 1357.64) | Pozostalo: 31166.67
Miesiac 3: Rata 2715.28 (K: 1416.67 + O: 1298.61) | Pozostalo: 29750.00
Miesiac 4: Rata 2656.25 (K: 1416.67 + O: 1239.58) | Pozostalo: 28333.33
Miesiac 5: Rata 2597.22 (K: 1416.67 + O: 1180.56) | Pozostalo: 26916.67
Miesiac 6: Rata 2538.19 (K: 1416.67 + O: 1121.53) | Pozostalo: 25500.00
Miesiac 7: Rata 2479.17 (K: 1416.67 + O: 1062.50) | Pozostalo: 24083.33
Miesiac 8: Rata 2420.14 (K: 1416.67 + O: 1003.47) | Pozostalo: 22666.67
Miesiac 9: Rata 2361.11 (K: 1416.67 + O: 944.44) | Pozostalo: 21250.00
Miesiac 10: Rata 2302.08 (K: 1416.67 + O: 885.42) | Pozostalo: 19833.33
Miesiac 11: Rata 2243.06 (K: 1416.67 + O: 826.39) | Pozostalo: 18416.67
Miesiac 12: Rata 2184.03 (K: 1416.67 + O: 767.36) | Pozostalo: 17000.00
Miesiac 13: Rata 2125.00 (K: 1416.67 + O: 708.33) | Pozostalo: 15583.33
Miesiac 14: Rata 2065.97 (K: 1416.67 + O: 649.31) | Pozostalo: 14166.67
Miesiac 15: Rata 2006.94 (K: 1416.67 + O: 590.28) | Pozostalo: 12750.00
Miesiac 16: Rata 1947.92 (K: 1416.67 + O: 531.25) | Pozostalo: 11333.33
Miesiac 17: Rata 1888.89 (K: 1416.67 + O: 472.22) | Pozostalo: 9916.67
Miesiac 18: Rata 1829.86 (K: 1416.67 + O: 413.19) | Pozostalo: 8500.00
Miesiac 19: Rata 1770.83 (K: 1416.67 + O: 354.17) | Pozostalo: 7083.33
Miesiac 20: Rata 1711.81 (K: 1416.67 + O: 295.14) | Pozostalo: 5666.67
Miesiac 21: Rata 1652.78 (K: 1416.67 + O: 236.11) | Pozostalo: 4250.00
Miesiac 22: Rata 1593.75 (K: 1416.67 + O: 177.08) | Pozostalo: 2833.33
Miesiac 23: Rata 1534.72 (K: 1416.67 + O: 118.06) | Pozostalo: 1416.67
Miesiac 24: Rata 1475.69 (K: 1416.67 + O: 59.03) | Pozostalo: -0.00
```

---

## Działanie programu

1. Program prosi użytkownika o wprowadzenie kwoty kredytu, liczby rat oraz oprocentowania rocznego.
2. Oblicza stałą część kapitałową kredytu (kwota_kredytu / liczba_rat).
3. Funkcja rekurencyjna harmonogram_rat_malejacych wyświetla harmonogram rat miesiąc po miesiącu, aż do spłaty całego kredytu.
4. Dla każdego miesiąca program wylicza:
- Odsetki od pozostałego długu,
- Całkowitą ratę jako sumę kapitału i odsetek,
- Pozostałą kwotę do spłaty
5. Wszystkie kwoty wyświetlane są z dokładnością do 2 miejsc po przecinku.

---

## 👤 Autor

* **Imię / Pseudonim:** Piotr
* **Rok:** 2025
* **Środowisko:** Visual Studio Code + Clang


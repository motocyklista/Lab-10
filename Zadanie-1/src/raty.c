#include <stdio.h>

// Funkcja rekurencyjna do wyświetlenia harmonogramu spłat rat malejących. //

void harmonogram_rat_malejacych(int miesiac, int liczba_rat, double aktualny_dlug, double kapital_staly, double oprocentowanie_roczne) {
    if (miesiac > liczba_rat) {
        // Warunek zakończenia rekurencji
        return;
    }

    // Obliczenie odsetek za bieżący miesiąc //
    double odsetki = aktualny_dlug * (oprocentowanie_roczne / 12.0);

    // Całkowita rata //
    double rata = kapital_staly + odsetki;

    // Wyświetlenie informacji //
    printf("Miesiac %d: Rata %.2f (K: %.2f + O: %.2f) | Pozostalo: %.2f\n",
           miesiac, rata, kapital_staly, odsetki, aktualny_dlug - kapital_staly);

    // Wywołanie rekurencyjne dla kolejnego miesiąca //
    harmonogram_rat_malejacych(miesiac + 1, liczba_rat, aktualny_dlug - kapital_staly, kapital_staly, oprocentowanie_roczne);
}

int main() {
    double kwota_kredytu, oprocentowanie_roczne;
    int liczba_rat;

    // Pobranie danych od użytkownika //
    printf("Podaj kwote kredytu: ");
    scanf("%lf", &kwota_kredytu);

    printf("Podaj liczbe rat: ");
    scanf("%d", &liczba_rat);

    printf("Podaj oprocentowanie roczne (np. 0.10 dla 10%%): ");
    scanf("%lf", &oprocentowanie_roczne);

    // Stała część kapitałowa //
    double kapital_staly = kwota_kredytu / liczba_rat;

    printf("\n--- Harmonogram splat rat malejacych ---\n");
    harmonogram_rat_malejacych(1, liczba_rat, kwota_kredytu, kapital_staly, oprocentowanie_roczne);

    return 0;
}

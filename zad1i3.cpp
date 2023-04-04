#include <iostream>
#include <climits> // Biblioteka umożliwiająca korzystanie ze stałej najwiekszej i najmniejszej INT_MIN.

using namespace std;

int main() {
    
    int liczba;
    cout << "ile liczb chcesz sprawdzic: "; // pytanie o ilosc liczb do sprawdzenia
    cin >> liczba; // Pobranie od użytkownika ilości liczb.

    int najwieksza = INT_MIN; // zmienna najwieksza  = najmniejszej mozliwej liczbie
    int ilosc = 0;

    for (int i = 0; i < liczba; i++) { // petla wykonujaca sie x razy
        int liczba;
        cout << "Podaj liczbe: "; // pytanie o podanie liczby
        cin >> liczba; // Pobranie od użytkownika liczby.

        if (liczba > najwieksza) {
            najwieksza = liczba; // przypisanie liczba do najwiekszej
            ilosc=1; // jesli liczba jest wieksza niz najwieksza wystapienie = 1
        } else if(liczba==najwieksza){ 
            ilosc++; // jesli liczba jest rowna najwieksza wystapienie wiecej niz 1
        }
    }

    // Wyświetlenie największej liczby i ile razy wystepuje.
    cout << "Najwieksza liczba to: " << najwieksza << " Wystapila " << ilosc << " razy" << endl;

    return 0; 
}

#include <iostream>
#include <climits> // Biblioteka umożliwiająca korzystanie z stałej najwiekszej i najmniejszej INT_MIN.

using namespace std;

int main() {
    int x;
    cout << "Podaj ilosc liczb do wczytania: "; // Wyświetlenie tekstu z prośbą o podanie ilości liczb.
    cin >> x; // Pobranie od użytkownika ilości liczb.

    int najwieksza = INT_MIN; // zmienna najwieksza  = najmniejszej mozliwej liczbie
    int ilosc = 0;

    for (int i = 0; i < x; i++) { // petla wykonujaca sie x razy
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

    // Wyświetlenie największej liczby i jej ilości wystąpień.
    cout << "Najwieksza liczba to: " << najwieksza << endl;
    cout << "Wystapila " << ilosc << " razy" << endl;

    return 0; 
}

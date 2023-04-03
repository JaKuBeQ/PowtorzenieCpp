#include <iostream>
#include <climits> // Biblioteka umożliwiająca korzystanie z stałej najwiekszej i najmniejszej INT_MIN.

using namespace std;

int main() {
    int x;
    cout << "Podaj ilosc liczb do wczytania: "; // Wyświetlenie tekstu z prośbą o podanie ilości liczb.
    cin >> x; // Pobranie od użytkownika ilości liczb.

    int najmniejsza = INT_MAX; //zmienna najmniejsza  = najwiekszej mozliwej liczbie
    int ilosc = 0;

    for (int i = 0; i < x; i++) { // petla wykonujaca sie x razy
        int liczba;
        cout << "Podaj liczbe: "; // pytanie o podanie liczby
        cin >> liczba; // Pobranie od użytkownika liczby.

        if (liczba < najmniejsza) {
            najmniejsza = liczba; //przypisanie liczba do najmniejsza
            ilosc=1; // jesli liczba jest wieksza niz najwieksza wystapienie = 1
        } else if(liczba==najmniejsza){
            ilosc++; // jesli liczba jest rowna najwieksza wystapienie wiecej niz 1
        }
    }

    // Wyświetlenie najmniejsxej liczby i jej ilości wystąpień.
    cout << "Najmniejsza liczba to: " << najmniejsza << endl;
    cout << "Wystapila " << ilosc << " razy" << endl;

    return 0;
}
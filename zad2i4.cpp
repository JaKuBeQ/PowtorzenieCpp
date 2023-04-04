#include <iostream>
#include <climits> // Biblioteka umożliwiająca korzystanie z stałej najwiekszej i najmniejszej INT_MIN.

using namespace std;

int main() {
    int liczba;
    cout << "Podaj ilosc liczb do wczytania: "; // Wyświetlenie tekstu z prośbą o podanie ilości liczb.
    cin >> liczba; // Pobranie od użytkownika ilości liczb.

    int najmniejsza = INT_MAX; //zmienna najmniejsza  = najwiekszej mozliwej liczbie
    int ilosc = 0;

    for (int i = 0; i < liczba; i++) { // petla wykonujaca sie x razy
        int liczba2;
        cout << "Podaj liczbe: "; // pytanie o podanie liczby
        cin >> liczba2; // Pobranie od użytkownika liczby.

        if (liczba2 < najmniejsza) {
            najmniejsza = liczba2; //przypisanie liczba do najmniejsza
            ilosc=1; // jesli liczba jest wieksza niz najwieksza wystapienie = 1
        } else if(liczba2==najmniejsza){
            ilosc++; // jesli liczba jest rowna najwieksza wystapienie wiecej niz 1
        }
    }

    // Wyświetlenie najmniejsxej liczby i jej ilości wystąpień.
    cout << "Najmniejsza liczba to: " << najmniejsza << " Wystapila " << ilosc << " razy" << endl;
    cout << "Wystapila " << ilosc << " razy" << endl;

    return 0;
}

#include <iostream>
#include <climits>

using namespace std;

int main() {
    int x;
    cout << "Podaj ilosc liczb do wczytania: ";
    cin >> x;

    int najmniejsza = INT_MAX;
    int ilosc = 0;
    for (int i = 0; i < x; i++) {
        int liczba;
        cout << "Podaj liczbe: ";
        cin >> liczba;
        if (liczba < najmniejsza) {
            najmniejsza = liczba;
            ilosc=1;
        }else if(liczba==najmniejsza){
            ilosc++;
        }
    }

    cout << "Najmniejsza liczba to: " << najmniejsza << endl;
    cout << "Wystapila " << ilosc << " razy" << endl;

    return 0;
}
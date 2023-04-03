#include <iostream>
#include <climits>

using namespace std;

int main() {
    int x;
    cout << "Podaj ilosc liczb do wczytania: ";
    cin >> x;

    int najwieksza = INT_MIN;
    int ilosc = 0;
    for (int i = 0; i < x; i++) {
        int liczba;
        cout << "Podaj liczbe: ";
        cin >> liczba;
        if (liczba > najwieksza) {
            najwieksza = liczba;
            ilosc=1;
        }else if(liczba==najwieksza){
            ilosc++;
        }
    }

    cout << "Najwieksza liczba to: " << najwieksza << endl;
    cout << "Wystapila " << ilosc << " razy" << endl;

    return 0;
}
#include <iostream>
#include "include/PersegiPanjang.hpp"

using namespace std;

int main()
{
    persegiPanjang P1(3, 2, 4, 2), P2(4, 3, 2, 4), P3(9, 2, 6, 2), P4(9, 6, 2, 4), P5, P6;

    cout << "\nBerikut adalah data dari persegi panjang yg akan digunakan : \n";
    cout << "Persegi panjang 1 = \n";
    P1.print();
    cout << "Persegi panjang 2 = \n";
    P2.print();
    cout << "Persegi panjang 3 = \n";
    P3.print();
    cout << "Persegi panjang 4 = \n";
    P4.print();

    P5 = P1 + P2;
    cout << "Jumlah P1 dan P2: \n";
    P5.print();

    P6 = P1 - P2;
    cout << "Selisih P1 dan P2: \n";
    P6.print();

    P1++;
    cout << "Luas Persegi Panjang 1 menjadi 2x: \n";
    P1.print();

    P2--;
    cout << "Luas persegi panjang 2 menjadi 0,5x: \n";
    P2.print();

    cout << "Apakah persegi panjang 1 dan 2 beririsan: \n";
    if (P1 == P2)
    {
        cout << "Ya!\n";
    }
    else
    {
        cout << "Tidak!\n";
    }

    cout << "\nApakah persegi panjang 3 dan 4 tidak saling beririsan :\n";
    if (P3 == P4)
    {
        cout << "Ya!\n";
    }
    else
    {
        cout << "Tidak!\n";
    }
    return 0;
}

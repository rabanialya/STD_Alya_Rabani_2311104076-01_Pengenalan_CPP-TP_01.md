#include <iostream>

using namespace std;

int main()
{
    float bilangan1, bilangan2;

    cout << "Masukkan bilangan pertama: ";
    cin >> bilangan1;
    cout << "Masukkan bilangan kedua: ";
    cin >> bilangan2;

    float penjumlahan = bilangan1 + bilangan2;
    float pengurangan = bilangan1 - bilangan2;
    float perkalian = bilangan1 * bilangan2;

    if (bilangan2 != 0) {
        float pembagian = bilangan1 / bilangan2;
        cout << "Hasil Pembagian: " << pembagian << endl;
    } else {
        cout << "Pembagian dengan nol tidak dapat dilakukan!" << endl;
    }

    cout << "Hasil Penjumlahan: " << penjumlahan << endl;
    cout << "Hasil Pengurangan: " << pengurangan << endl;
    cout << "Hasil Perkalian: " << perkalian << endl;

    return 0;
}

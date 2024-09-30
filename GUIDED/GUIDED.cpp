#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int angka = 10;
    float desimal = 10.5;
    string kalimat = "alya";
    double tinggi = 10.4;
    char jenis_kelamin = 'P';
    bool isSunny = true;

    cout << "Angka: " << angka << endl;

    cout << "Masukan angka: ";
    cin >> angka;

    cout << "Angka: " << angka << endl;

    getch();
}

/*#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    // operator aritmatika
    int angka1 = 5;
    int angka2 = 10;

    int hasil = angka1 % angka2;

    cout << "Hasilnya adalah " << hasil << endl;

}*/

/*#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //operator perbandingan
    int angka1 = 0;
    int angka2 = 1;

    bool hasil = (angka1 != angka2);

    cout << "hasilnya adalah " << hasil << endl;
}*/

/*#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //operator logika
    /*bool kondisi1 = true;
    bool kondisi2 = false;

    bool hasil = (kondisi1 && kondisi2);
    cout << "Hasilnya adalah " << boolalpha << hasil << endl;*/

    /*bool kondisi1 = false;
    bool hasil = !kondisi1;
    cout << "Hasilnya adalah " << boolalpha << hasil << endl;
}*/

/*#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //percabangan
    string kata;
    cout << "Masukan kata = Ohayoo" << endl;
    cin >> kata;

    if (kata == "Ohayoo"){
        cout << "Kata sesuai" << endl;
    } else {
        cout << "Kata tidak sesuai" << endl;
    }

    /*int tv;
    cout << "Daftar chanel tv" << endl;
    cout << "1. RCTI" << endl;
    cout << "2. Indosiar" << endl;
    cout << "3. Trans 7" << endl;


    cout << "Masukkan chanel pilihan: ";
    cin >> tv;

    switch(tv) {
        case 1 :
            cout << "Chanel yg anda pilih RCTI" << endl;
            break;
        case 2 :
            cout << "Chanel yg anda pilih Indosiar" << endl;
            break;
        case 3 :
            cout << "Chanel yg anda pilih Trans7" << endl;
            break;
        default:
            cout << "Chanel tdk tersedia" << endl;
    }
}*/

/*#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //perulangan

    for(int i = 0; i<5; i++){
    cout << "hello world" << endl;
    }

    for(int i=0; i<5; i++){
    cout << "hello world" << endl;
    }
}*/

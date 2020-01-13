/* Percobaan II-6: Percabangan if
 * percobaan206.cpp */
#include <iostream>

using namespace std;

int main()
{
    float nilai;

    cout << "Masukkan sebuah nilai = ";
    cin >> nilai;

    if (nilai >= 90)
        cout << "Huruf mutu Anda adalah A." << endl;
    else if (nilai > 80 - 89)
        cout << "Huruf mutu Anda adalah B." << endl;
    else if (nilai > 70 -79)
        cout << "Huruf mutu Anda adalah C." << endl;
    else if (nilai > 60-69)
        cout << "Huruf mutu Anda adalah D." << endl;
    else if (nilai <= 59)
        cout << "Huruf mutu Anda adalah E." << endl;
    else
        cout << "Nilai di luar jangkauan." << endl;

    return 0;
}

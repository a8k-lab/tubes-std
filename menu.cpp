#include "menu.h"

int selectMenu() {
    cout << "====== MENU =======" << endl;
    cout << "1. Menu Dokter" << endl;
    cout << "2. Menu Perawatan" << endl;
    cout << "3. Menu Pasien" << endl;
    cout << "0. Exit" << endl;
    cout << "Pilih menu: ";

    int input = 0;
    cin >> input;
    return input;
}

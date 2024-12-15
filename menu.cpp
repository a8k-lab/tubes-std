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

int selectDoctorMenu() (
    cout << "====== MENU DOKTER =======" << endl;
    cout << "1. Tambah Dokter" << endl;
    cout << "2. Lihat Daftar Dokter" << endl;
    cout << "3. Cari Dokter" << endl;
    cout << "4. Hapus Data Dokter" << endl;
    cout << "0. Kembali ke Menu Utama" << endl;
    cout << "Pilih menu: ";

    int input = 0;
    cin >> input;
    return input
)
int selectTreatmentMenu() (
    cout << "====== MENU PERAWATAN =======" << endl;
    cout << "1. Tambah Data Perawatan" << endl;
    cout << "2. Edit Dokter atau Pasien dari Data Perawatan" << endl;
    cout << "3. Lihat Data Perawatan" << endl;
    cout << "0. Kembali ke Menu Utama" << endl;
    cout << "Pilih menu: ";

    int input = 0;
    cin >> input;
    return input
)
int selectPatientMenu(); {
    cout << "====== MENU PASIEN =======" << endl;
    cout << "1. Tambah Pasien" << endl;
    cout << "2. Lihat Daftar Pasien" << endl;
    cout << "3. Cari Pasien" << endl;
    cout << "0. Kembali ke Menu Utama" << endl;
    cout << "Pilih menu: ";

    int input = 0;
    cin >> input;
    return input
}

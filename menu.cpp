#include "menu.h"

void clearScreen() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int selectMenu() {
    clearScreen();
    cout << "==========================================" << endl;
    cout << "Tugas Besar Struktur Data" << endl;
    cout << "Kelompok 2M" << endl;
    cout << "Anggota: " << endl;
    cout << "• Putri Galuh Mandarizka (103042310062)" << endl;
    cout << "• Abdul Malik (103042310065)" << endl;
    cout << "================== MENU ==================" << endl;
    cout << "1. Menu Dokter" << endl;
    cout << "2. Menu Perawatan" << endl;
    cout << "3. Menu Pasien" << endl;
    cout << "0. Exit" << endl;
    cout << "Pilih menu: ";

    int input = 0;
    cin >> input;
    return input;
}

int selectDoctorMenu() {
    clearScreen();
    cout << "============= MENU DOKTER ===============" << endl;
    cout << "1. Tambah Dokter" << endl;
    cout << "2. Hapus Dokter" << endl;
    cout << "3. Cari Dokter" << endl;
    cout << "4. Tampilkan semua data Dokter" << endl;
    cout << "5. Tampilkan Dokter berdasarkan Pasien tertentu" << endl;
    cout << "6. Tampilkan Dokter, Pasien, dan Perawatannya" << endl;
    cout << "7. Tampilkan total Pasien pada Dokter tertentu" << endl;
    cout << "8. Tampilkan total Dokter yang tidak memiliki Pasien" << endl;
    cout << "0. Kembali ke Menu Utama" << endl;
    cout << "Pilih menu: ";

    int input = 0;
    cin >> input;
    return input;
}

int selectTreatmentMenu() {
    clearScreen();
    cout << "============ MENU PERAWATAN ===========" << endl;
    cout << "1. Tambah Perawatan" << endl;
    cout << "2. Hapus Perawatan" << endl;
    cout << "3. Edit Dokter atau Pasien" << endl;
    cout << "4. Cek apakah Dokter dan Pasien memiliki relasi Perawatan" << endl;
    cout << "0. Kembali ke Menu Utama" << endl;
    cout << "Pilih menu: ";

    int input = 0;
    cin >> input;
    return input;
}

int selectPatientMenu() {
    clearScreen();
    cout << "============= MENU PASIEN =============" << endl;
    cout << "1. Tambah Pasien" << endl;
    cout << "2. Hapus Pasien" << endl;
    cout << "3. Cari Pasien" << endl;
    cout << "4. Tampilkan Semua data Pasien" << endl;
    cout << "5. Tampilkan Pasien berdasarkan Dokter" << endl;
    cout << "6. Tampilkan Pasien, Dokter, dan Perawatannya" << endl;
    cout << "7. Tampilkan total Dokter yang menangani Pasien tertentu" << endl;
    cout << "8. Tampilkan total Pasien yang belum ditangani Dokter" << endl;
    cout << "0. Kembali ke Menu Utama" << endl;
    cout << "Pilih menu: ";

    int input = 0;
    cin >> input;
    return input;
}

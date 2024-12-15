#include "menu.h"

int selectMenu() {
    cout << "==========================================" << endl;
    cout << "Nama Kelompok : 2M" << endl;
    cout << "Nama Anggota: " << endl;
    cout << "1. Putri Galuh Mandarizka (103042310062)" << endl;
    cout << "2. Abdul Malik (103042310065)" << endl;
    cout << "==========================================" << endl;
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

int selectDoctorMenu() (
    cout << "============= MENU DOKTER ===============" << endl;
    cout << "1. Tambah Dokter" << endl;
    cout << "2. Hapus Dokter" << endl;
    cout << "3. Mencari Dokter" << endl;
    cout << "4. Menampilkan Semua Data Dokter" << endl;
    cout << "5. Menampilkan Dokter Berdasarkan Pasien" << endl;
    cout << "6. Menampilkan Dokter, Pasien, dan Perawatannya" << endl;
    cout << "7. Menampilkan Total Pasien pada Dokter Tertentu" << endl;
    cout << "8. Menampilkan Total Dokter yang Tidak Memiliki Pasien" << endl;
    cout << "0. Kembali ke Menu Utama" << endl;
    cout << "Pilih menu: ";

    int input = 0;
    cin >> input;
    return input
)
int selectTreatmentMenu() (
    cout << "============ MENU PERAWATAN ===========" << endl;
    cout << "1. Tambah Data Perawatan" << endl;
    cout << "2. Hapus Data Perawatan" << endl;
    cout << "3. Edit Dokter atau Pasien dari Data Perawatan" << endl;
    cout << "0. Kembali ke Menu Utama" << endl;
    cout << "Pilih menu: ";

    int input = 0;
    cin >> input;
    return input
)
int selectPatientMenu(); {
    cout << "============= MENU PASIEN =============" << endl;
    cout << "1. Tambah Pasien" << endl;
    cout << "2. Menghapus Data Pasien" << endl;
    cout << "3. Cari Pasien" << endl;
    cout << "4. Menampilkan Semua Data Pasien" << endl;
    cout << "5. Menampilkan Pasien Berdasarkan Dokter" << endl;
    cout << "6. Menampilkan Pasien, Dokter, dan Perawatannya" << endl;
    cout << "7. Menampilkan Total Dokter yang Menangani Pasien Tertentu" << endl;
    cout << "8. Menampilkan Total Pasien yang Belum Ditangani Dokter" << endl;
    cout << "0. Kembali ke Menu Utama" << endl;
    cout << "Pilih menu: ";

    int input = 0;
    cin >> input;
    return input
}

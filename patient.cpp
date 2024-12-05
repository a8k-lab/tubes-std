#include "patient.h"


// Fungsi untuk membuat list pasien baru
void createdNewListPatient(ListPatient &L) {
    L.first = nil; // Inisialisasi first dengan nil
    L.last = nil;  // Inisialisasi last dengan nil
}

// Fungsi untuk mengalokasikan memori untuk pasien baru
patientAddress allocatePatient(patientInfo Elm) {
    patientAddress P = new ElmPatient; // Alokasikan memori
    if (P) { // Cek apakah alokasi berhasil
        P->info = Elm; // Set info pasien
        P->prev = nil; // Tidak ada elemen sebelumnya
        P->next = nil; // Tidak ada elemen berikutnya
        P->relation = nil; // Belum ada relasi treatment
    }
    return P; // Kembalikan alamat pasien baru
}

// Fungsi untuk menambahkan pasien ke akhir list
void insertPatientLast(ListPatient &L, patientAddress P) {
    if (isPatientEmpty(L)) { // Cek jika list kosong
        L.first = P; // Jika kosong, elemen pertama adalah P
        L.last = P; // Elemen terakhir juga P
    } else {
        L.last->next = P; // Tambahkan P di belakang
        P->prev = L.last; // Set prev P ke last
        L.last = P; // Update last ke P
    }
}

// Fungsi untuk menghapus pasien berdasarkan info

// Fungsi untuk menghapus pasien berdasarkan nama
void deletePatient(ListPatient &L, string patientInfo) {
    // Cek apakah list kosong
    if (isPatientEmpty(L)) {
        cout << "List pasien kosong, tidak ada yang bisa dihapus." << endl;
        return; // Keluar jika list kosong
    }

    patientAddress current = L.first; // Mulai dari pasien pertama

    // Mencari pasien dengan nama yang diberikan
    while (current != nil) {
        if (current->info.info == patientInfo) { // Jika nama cocok
            break; // Keluar dari loop jika ditemukan
        }
        current = current->next; // Lanjut ke pasien berikutnya
    }

    // Jika pasien ditemukan
    if (current != nil) {
        if (current->prev == nil) {
            L.first = current->next; // Update pasien pertama
        } else {
            current->prev->next = current->next; // Hubungkan dengan pasien sebelumnya
        }

        if (current->next == nil) {
            L.last = current->prev; // Update pasien terakhir
        } else {
            current->next->prev = current->prev; // Hubungkan dengan pasien berikutnya
        }

        delete current; // Hapus pasien dari memori
        cout << "Pasien " << patientInfo << " telah dihapus." << endl;
    }
}

// Fungsi untuk mencari pasien berdasarkan nama
patientAddress findPatient(ListPatient &L, string patientInfo) {
    patientAddress current = L.first; // Mulai dari pasien pertama

    // Mencari pasien dalam list
    while (current != nil) { // Selama current tidak null
        if (current->info.info == patientInfo) { // Jika nama cocok
            return current; // Kembalikan alamat pasien yang ditemukan
        }
        current = current->next; // Pindah ke pasien berikutnya
    }
    
    // Jika pasien tidak ditemukan
    cout << "Pasien " << patientInfo << " tidak ditemukan." << endl;
    return nil; // Kembalikan nil jika tidak ditemukan
}

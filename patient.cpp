#include "alias.h"
#include "patient.h"

// Fungsi untuk membuat list pasien baru
void createdNewListPatient(ListPatient &L) {
    first(L) = nil; // Inisialisasi first dengan nil
    last(L) = nil;  // Inisialisasi last dengan nil
}

// Fungsi untuk mengalokasikan memori untuk pasien baru
patientAddress allocatePatient(patientInfo Elm) {
    patientAddress P = new ElmPatient; // Alokasikan memori
    if (P) { // Cek apakah alokasi berhasil
        info(P) = Elm; // Set info pasien
        prev(P) = nil; // Tidak ada elemen sebelumnya
        next(P) = nil; // Tidak ada elemen berikutnya
        relation(P) = nil; // Belum ada relasi treatment
    }
    return P; // Kembalikan alamat pasien baru
}

// Fungsi untuk menambahkan pasien ke akhir list
void insertPatientLast(ListPatient &L, patientAddress P) {
    if (isPatientEmpty(L)) { // Cek jika list kosong
        first(L) = p;
        last(L) = p;
    } else {
        next(last(L)) = p;
        prev(p) = last(L);
        last(L) = p;
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

    patientAddress current = first(L); // Mulai dari pasien pertama

    // Mencari pasien dengan nama yang diberikan
    while (current != nil) {
        if (info(current).info == patientInfo) { // Jika nama cocok
            break; // Keluar dari loop jika ditemukan
        }
        current = next(current); // Lanjut ke pasien berikutnya
    }

    // Jika pasien ditemukan
    if (current != nil) {
        if (prev(current) == nil) {
            first(L) = next(current); // Update pasien pertama
        } else {
            current->next(prev) = next(current); // Hubungkan dengan pasien sebelumnya
        }

        if (next(current) == nil) {
            last(L) = prev(current); // Update pasien terakhir
        } else {
            prev(next(current)) = prev(current); // Hubungkan dengan pasien berikutnya
        }

        delete current; // Hapus pasien dari memori
        cout << "Pasien " << patientInfo << " telah dihapus." << endl;
    }
}

// Fungsi untuk mencari pasien berdasarkan nama
patientAddress findPatient(ListPatient &L, string patientInfo) {
    patientAddress current = first(L); // Mulai dari pasien pertama

    // Mencari pasien dalam list
    while (current != nil) { // Selama current tidak null
        if (info(current).info == patientInfo) { // Jika nama cocok
            return current; // Kembalikan alamat pasien yang ditemukan
        }
        current = next(current); // Pindah ke pasien berikutnya
    }

    // Jika pasien tidak ditemukan
    cout << "Pasien " << patientInfo << " tidak ditemukan." << endl;
    return nil; // Kembalikan nil jika tidak ditemukan
}

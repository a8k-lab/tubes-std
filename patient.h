#ifndef PATIENT_H
#define PATIENT_H

#include "base.h"

// IS. -
// FS. Terbentuk sebuah list di mana, first dari L bernilai NIL.
void createNewListPatient(ListPatient &L);

// Fungsi mengembalikan elemen patient berdasarkan parameter fungsi, yaitu 'Elm'.
patientAddress allocatePatient(patientInfo Elm);

// IS. Terdefinisi pointer P berisi alamat elmPatient, dan seuah list L ( L mungkin kosong).
// FS. elmPatient yang ditunjuk oleh P ditambahkan ke dalam list sebagai elemen terakhir.
void insertPatientLast(ListPatient &L, patientAddress P);

// IS. Terdefinisi sebuah list L (L tidak kosong dan mungkin berisi satu elemen).
// FS. P berisi alamat elmPatient yang terakhir, elmPatient yang ditunjuk oleh P dihapus dari list
void deletePatientLast(ListPatient &L, patientAddress &P);

// Fungsi untuk mencari pasien berdasarkan nama
patientAddress findPatient(ListPatient &L, string patientName);

// Fungsi mengembalikan True apabila list kosong, atau False bila sebaliknya.
bool isPatientEmpty(ListPatient L);

// IS. Terdefinisi sebuah list patient L
// FS. Menampilkan semua info elmPatient di list.
void printListPatient(ListPatient L);

// IS. Terdefinisi sebuah list patient L
// FS. Menampilkan elmPatient yang ditangani oleh dokter tertentu.
void printListPatientByDoctor(ListPatient L, string doctor);

// IS. Terdefinisi sebuah list patient L
// FS. Menampilkan detail pasien tertentu beserta dokter yang menanganinya.
void printPatientDetails(ListPatient L, string patientName);

// IS. Terdefinisi sebuah list patient L
// FS. Menampilkan total dokter yang menangani pasien tertentu.
void printTotalDoctorByPatient(ListPatient L, string patientName);

// IS. Terdefinisi sebuah list patient L
// FS. Menampilkan total pasien yang belum ditangani dokter.
void printTotalPatientNoDoctor(ListPatient L);

#endif //PATIENT_H

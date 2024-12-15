#ifndef DOCTOR_H
#define DOCTOR_H

#include "base.h"

// IS. –
// FS. Terbentuk sebuah list di mana, first dari L bernilai NIL.
void createNewListDoctor(ListDoctor &L);

// Fungsi mengembalikan elemen doctor berdasarkan parameter fungsi, yaitu `Elm`.
doctorAddress allocateDoctor(doctorInfo Elm);

// IS. Terdefinisi pointer P berisi alamat elmDoctor, dan sebuah list L (L mungkin kosong).
// FS. elmDoctor yang ditunjuk oleh P ditambahkan ke dalam list sebagai elemen terakhir.
void insertDoctorLast(ListDoctor &L, doctorAddress P);

// IS. Terdefinisi sebuah list L (L tidak kosong dan mungkin berisi satu elemen).
// FS. P berisi alamat elmDoctor yang terakhir, elmDoctor yang ditunjuk oleh P dihapus dari list
void deleteDoctorLast(ListDoctor &L, doctorAddress &P);

// Fungsi mengembalikan True apabila list kosong, atau False bila sebaliknya.
bool isDoctorEmpty(ListDoctor L);

// IS. Terdefinisi sebuah list doctor L
// FS. Menampilkan semua info elmDoctor di list.
void printListDoctor(ListDoctor L);

// IS. Terdefinisi sebuah list doctor L
// FS. Menampilkan elmDoctor yang menangani pasien tertentu.
void printListDoctorByPatient(ListDoctor L, string patient);

// IS. Terdefinisi sebuah list doctor L
// FS. Menampilkan total pasien yang ditangani oleh dokter tertentu.
void printTotalPatientByDoctor(ListDoctor L, string doctor);

// IS. Terdefinisi sebuah list doctor L
// FS. Menampilkan list doctor yang tidak memiliki pasien.
void printListDoctorNoPatient(ListDoctor L);

#endif //DOCTOR_H

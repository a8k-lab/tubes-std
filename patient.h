#ifndef PATIENT_H
#define PATIENT_H

#include <string>
#include "treatment.h"

typedef struct Patient patientInfo;
typedef struct ElmPatient *patientAddress;

struct Patient {
  string name;
  string gender;
  int age;
};
struct ElmPatient {
  patientInfo info;
  patientAddress prev;
  patientAddress next;
  treatmentAddress relation;
};
struct ListPatient {
  patientAddress first;
  patientAddress last;
};

// IS. -
// FS. Terbentuk sebuah list di mana, first dari L bernilai NIL.

void createdNewListPatient(ListPatient &L);

// Fungsi mengembalikan elemen patient berdasarkan parameter fungsi, yaitu 'Elm'.
patientAddress allocatePatient(patientInfo Elm);

// IS. Terdefinisi pointer P berisi alamat elmPatient, dan seuah list L ( L mungkin kosong).
// FS. elmPatient yang ditunjuk oleh P ditambahkan ke dalam list sebagai elemen terakhir.

void insertPatientLast(ListPatient &L, patientAddress P);

// IS. Terdefinisi sebuah list L (L tidak kosong dan mungkin berisi satu elemen).
// FS. P berisi alamat elmPatient yang terakhir, elmPatient yang ditunjuk oleh P dihapus dari list
void deletePatient(ListPatient &L, string patientInfo);

// Fungsi untuk mencari pasien berdasarkan info
patientAddress findPatient(ListPatient &L, string patientInfo);

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
void printPatientDetails(ListPatient L, string patientInfo);

// Fungsi untuk menghitung total dokter yang menangani pasien tertentu
int countDoctorsForPatient(ListPatient L, string patientInfo);

// Fungsi untuk menghitung total pasien yang belum ditangani dokter
int countPatientNoDoctor(ListPatient L);

#endif //PATIENT_H

#ifndef TREATMENT_H
#define TREATMENT_H

#include "base.h"

// IS. –
// FS. Terbentuk sebuah list di mana, first dari L bernilai NIL.
void createNewListTreatment(ListTreatment &L);

// Fungsi mengembalikan elemen treatment berdasarkan parameter fungsi, yaitu `Elm`.
treatmentAddress allocateTreatment(treatmentInfo Elm);

// IS. Terdefinisi pointer P berisi alamat elmTreatment, dan sebuah list L (L mungkin kosong).
// FS. elmTreatment yang ditunjuk oleh P ditambahkan ke dalam list sebagai elemen terakhir.
void insertTreatmentLast(ListTreatment &L, treatmentAddress P);

// IS. Terdefinisi sebuah list L (L tidak kosong dan mungkin berisi satu elemen).
// FS. P berisi alamat elmTreatment yang terakhir, elmTreatment yang ditunjuk oleh P dihapus dari list
void deleteTreatmentLast(ListTreatment &L, treatmentAddress &P);

// Fungsi mengembalikan True apabila list kosong, atau False bila sebaliknya.
bool isTreatmentEmpty(ListTreatment L);

// Fungsi untuk memeriksa apakah dokter dan pasien memiliki relasi
bool isRelation(ListTreatment L, string doctorName, string patientName);

#endif //TREATMENT_H

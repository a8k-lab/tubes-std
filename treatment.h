#ifndef TREATMENT_H_INCLUDED
#define TREATMENT_H_INCLUDED
#include <iostream>

typedef struct Treatment treatmentInfo;
typedef struct ElmTreatment *treatmentAddress;

struct Treatment {
  string info;
};
struct ElmTreatment {
  treatmentInfo info;
  treatmentAddress next;
};
struct ListTreatment {
  treatmentAddress first;
};

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

// TODO: edit dokter atau pasien dari data perawatan

#endif // TREATMENT_H_INCLUDED

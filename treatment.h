#ifndef TREATMENT_H
#define TREATMENT_H

#include <string>
#include "doctor.h"
#include "patient.h"

typedef struct Treatment treatmentInfo;
typedef struct ElmTreatment *treatmentAddress;

struct Treatment {
  string name;
  float price;
  int duration;
};
struct ElmTreatment {
  treatmentInfo info;
  treatmentAddress next;
  doctorAddress doctor;
  patientAddress patient;
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

// Fungsi mengembalikan True apabila list kosong, atau False bila sebaliknya.
bool isTreatmentEmpty(ListTreatment L);

// TODO: edit dokter atau pasien dari data perawatan

#endif //TREATMENT_H

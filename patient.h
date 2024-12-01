#ifndef PATIENT_H_INCLUDED
#define PATIENT_H_INCLUDED
#include <iostream>
#include "treatment.h"

typedef struct Patient patientInfo;
typedef struct ElmPatient *patientAddress;

struct Patient {
  string info;
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

// TODO: required procedures and functions below here

#endif // PATIENT_H_INCLUDED

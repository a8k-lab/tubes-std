#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
#define first(L) L.first
#define last(L) L.last
#define next(P) P->next
#define prev(P) P->prev
#define info(P) P->info
#define relation(P) P->relation
#define nil NULL

// PARENT (DOCTOR)
typedef struct Doctor doctorInfo;
typedef struct ElmDoctor *doctorAddress;

// RELATION (TREATMENT)
typedef struct Treatment treatmentInfo;
typedef struct ElmTreatment *treatmentAddress;

// CHILD (PATIENT)
typedef struct Patient patientInfo;
typedef struct ElmPatient *patientAddress;


// PARENT (DOCTOR)
struct Doctor {
  string name;
  string speciality;
  int age;
};
struct ElmDoctor {
  doctorInfo info;
  doctorAddress next;
  treatmentAddress relation;
};
struct ListDoctor {
  doctorAddress first;
};

// RELATION (TREATMENT)
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

// CHILD (PATIENT)
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

#endif //BASE_H

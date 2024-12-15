#include "base.h"
#include "patient.h"

void createNewListPatient(ListPatient &L) {
    first(L) = nil; 
    last(L) = nil;  
}

patientAddress allocatePatient(patientInfo Elm) {
    patientAddress newElm = new ElmPatient;
    info(newElm) = Elm;
    next(newElm) = nil;
    prev(newElm) = nil;
    relation(newElm) = nil;
    return newElm;
}

void insertPatientLast(ListPatient &L, patientAddress P) {
    if (isPatientEmpty(L)) {
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

void deletePatientLast(ListPatient &L, patientAddress &P) {
    if (isPatientEmpty(L)) {
        cout << "List pasien kosong, tidak ada yang bisa dihapus." << endl;
        return;
    }
    if (next(first(L)) == nil){
        P = first(L);
        first(L) = nil;
    } else {
        patientAddress q;
        P = first(L);
        while (next(P) != nil){
            q = P;
            P = next(P);
        }
        next(q) = nil;
    }
}

patientAddress findPatient(ListPatient &L, string patientInfo) {
    patientAddress current = first(L);
    
    while (current != nil) {
        if (info(current).name == patientInfo) {
            return current;
        }
        current = next(current);
    }
    
    return nil;
}

bool isPatientEmpty(ListPatient L) {
    return first(L) == nil;
}

void printListPatient(ListPatient L) {
    patientAddress current = first(L);
    
    while (current != nil) {
        cout << info(current).name << " " 
            << info(current).gender << " " 
            << info(current).age << endl;
        current = next(current);
    }
}

void printListPatientByDoctor(ListPatient L, string doctorName) {
    patientAddress current = first(L);
    
    while (current != nil) {
        // Cek apakah pasien memiliki relasi treatment
        if (relation(current) != nil) {
            // Cek apakah nama dokter pada treatment sesuai
            if (info(relation(current)->doctor).name == doctorName) {
                cout << info(current).name << " " 
                    << info(current).gender << " " 
                    << info(current).age << endl;
            }
        }
        current = next(current);
    }
}

void printPatientDetails(ListPatient L, string patientName) {
    patientAddress patient = findPatient(L, patientName);
    
    if (patient == nil) {
        cout << "Pasien tidak ditemukan." << endl;
        return;
    }
    
    cout << "Nama: " << info(patient).name << endl;
    cout << "Jenis Kelamin: " << info(patient).gender << endl;
    cout << "Umur: " << info(patient).age << endl;
    
    // Tampilkan dokter yang menangani
    treatmentAddress treatment = relation(patient);
    if (treatment != nil) {
        cout << "Dokter yang menangani:" << endl;
        while (treatment != nil) {
            cout << "- " << info(treatment->doctor).name << endl;
            treatment = next(treatment);
        }
    } else {
        cout << "Belum ada dokter yang menangani." << endl;
    }
}

void printTotalDoctorByPatient(ListPatient L, string patientName) {
    patientAddress patient = findPatient(L, patientName);
    
    if (patient == nil) {
        cout << "Pasien tidak ditemukan." << endl;
        return;
    }
    
    treatmentAddress treatment = relation(patient);
    int totalDoctors = 0;
    
    while (treatment != nil) {
        totalDoctors++;
        treatment = next(treatment);
    }
    
    cout << "Total dokter yang menangani pasien " << patientName << ": " << totalDoctors << endl;
}

void printTotalPatientNoDoctor(ListPatient L) {
    patientAddress current = first(L);
    int totalPatientNoDoctor = 0;
    
    while (current != nil) {
        // Jika tidak memiliki relasi treatment (dokter)
        if (relation(current) == nil) {
            totalPatientNoDoctor++;
        }
        current = next(current);
    }
    
    cout << "Total pasien yang belum ditangani dokter: " << totalPatientNoDoctor << endl;
}

#include "base.h"
#include "doctor.h"

void createNewListDoctor(ListDoctor &L) {
    first(L) = nil;
}

doctorAddress allocateDoctor(doctorInfo Elm) {
    doctorAddress newElm = new ElmDoctor;
    info(newElm) = Elm;
    next(newElm) = nil;
    relation(newElm) = nil;
    return newElm;
}

void insertDoctorLast(ListDoctor &L, doctorAddress P) {
    doctorAddress x;

    if (isDoctorEmpty(L)) {
        first(L) = P;
    } else {
        x = first(L);
        while (next(x) != nil){
            x = next(x);
        }
        next(x) = P;
    }
}

void deleteDoctorLast(ListDoctor &L, doctorAddress &P) {
    if (isDoctorEmpty(L)) {
        cout << "List dokter kosong, tidak ada yang bisa dihapus." << endl;
        return;
    }
    if (next(first(L)) == nil){
        P = first(L);
        first(L) = nil;
    } else {
        doctorAddress q;
        P = first(L);
        while (next(P) != nil){
            q = P;
            P = next(P);
        }
        next(q) = nil;
    }
}

bool isDoctorEmpty(ListDoctor L) {
    return first(L) == nil;
}

void printListDoctor(ListDoctor L) {
    doctorAddress current = first(L);

    while (current != nil) {
        cout << info(current).name << " " << info(current).speciality << " " << info(current).age << endl;
        current = next(current);
    }
}

void printListDoctorByPatient(ListDoctor L, string patient) {
    doctorAddress current = first(L);

    while (current != nil) {
        if (relation(current) != nil) {
            if (info(relation(current)).name == patient) {
                cout << info(current).name << " " << info(current).speciality << " " << info(current).age << endl;
            }
        }
        current = next(current);
    }
}

void printTotalPatientByDoctor(ListDoctor L, string doctorName) {
    doctorAddress currentDoctor = first(L);
    int totalPatients = 0;

    while (currentDoctor != nil) {
        // Periksa apakah nama dokter sesuai
        if (info(currentDoctor).name == doctorName) {
            // Telusuri daftar perawatan
            treatmentAddress currentTreatment = relation(currentDoctor);
            
            // Hitung pasien yang berbeda
            while (currentTreatment != nil) {
                totalPatients++;
                currentTreatment = next(currentTreatment);
            }
            
            // Tampilkan total pasien yang ditangani dokter
            cout << "Total pasien yang ditangani Dr. " << doctorName << ": " << totalPatients << endl;
            return;
        }
        
        currentDoctor = next(currentDoctor);
    }

    // Jika dokter tidak ditemukan
    cout << "Dokter " << doctorName << " tidak ditemukan." << endl;
}

void printListDoctorNoPatient(ListDoctor L) {
    doctorAddress currentDoctor = first(L);

    while (currentDoctor != nil) {
        // Periksa apakah dokter tidak memiliki relasi perawatan (pasien)
        if (relation(currentDoctor) == nil) {
            cout << info(currentDoctor).name << " " 
                << info(currentDoctor).speciality << " " 
                << info(currentDoctor).age << endl;
        }
        
        currentDoctor = next(currentDoctor);
    }
}

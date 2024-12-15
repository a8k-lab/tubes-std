#include "base.h"
#include "treatment.h"

void createNewListTreatment(ListTreatment &L) {
    first(L) = nil;
}

treatmentAddress allocateTreatment(treatmentInfo Elm) {
    treatmentAddress newElm = new ElmTreatment;
    info(newElm) = Elm;
    next(newElm) = nil;
    return newElm;
}

void insertTreatmentLast(ListTreatment &L, treatmentAddress P) {
    treatmentAddress x;

    if (isTreatmentEmpty(L)) {
        first(L) = P;
    } else {
        x = first(L);
        while (next(x) != nil){
            x = next(x);
        }
        next(x) = P;
    }
}

void deleteTreatmentLast(ListTreatment &L, treatmentAddress &P) {
    if (isTreatmentEmpty(L)) {
        cout << "List perawatan kosong, tidak ada yang bisa dihapus." << endl;
        return;
    }
    if (next(first(L)) == nil){
        P = first(L);
        first(L) = nil;
    } else {
        treatmentAddress q;
        P = first(L);
        while (next(P) != nil){
            q = P;
            P = next(P);
        }
        next(q) = nil;
    }
}

bool isTreatmentEmpty(ListTreatment L) {
    return first(L) == nil;
}

bool isRelation(ListTreatment L, string doctorName, string patientName) {
    treatmentAddress current = first(L);

    while (current != nil) {
        // Periksa apakah nama dokter dan pasien sesuai pada treatment
        if (info(current->doctor).name == doctorName &&
            info(current->patient).name == patientName) {
            return true;  // Dokter dan pasien memiliki relasi
        }
        current = next(current);
    }

    return false;  // Tidak ada relasi ditemukan
}

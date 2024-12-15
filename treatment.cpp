#include "alias.h"
#include "treatment.h"

void createListTreatment(ListTreatment &L) {
    first(L) = nil;
}

treatmentAddress allocateTreatment(treatmentInfo Elm, treatmentAddress next) {
    treatmentAddress newElm = new ElmTreatment;
    info(newElm) = Elm;
    next(newElm) = next;
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

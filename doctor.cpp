#include "alias.h"
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

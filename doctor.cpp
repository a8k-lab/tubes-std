void createNewListDoctor(ListDoctor &L) {
    first(L) = nil;
    last(L) = nil;
}

doctorAddress allocateDoctor(doctorInfo Elm) {
    doctorAddress newElm = new ElmDoctor;
    info(newElm) = Elm;
    prev(newElm) = nil;
    next(newElm) = nil;
    relation(newElm) = nil;
    return newElm;
}

void insertDoctorLast(ListDoctor &L, doctorAddress P) {
    if (isDoctorEmpty(L)) {
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

void deleteDoctorLast(ListDoctor &L, doctorAddress &P) {
    if (isDoctorEmpty(L)) {
        cout << "List dokter kosong, tidak ada yang bisa dihapus." << endl;
        return;
    }
    P = last(L);
    if (first(L) == last(L)) {
        first(L) = nil;
        last(L) = nil;
    } else {
        last(L) = prev(last(L));
        next(last(L)) = nil;
        prev(P) = nil;
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
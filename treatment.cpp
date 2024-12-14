void createListTreatment(ListTreatment &L) {
    first(L) = nil;
    last(L) = nil;
}

treatmentAddress allocateTreatment(treatmentInfo Elm, treatmentAddress next) {
    treatmentAddress newElm = new ElmTreatment;
    info(newElm) = Elm;
    prev(newElm) = nil;
    next(newElm) = next;
    return newElm;
}

void insertTreatmentLast(ListTreatment &L, treatmentAddress P) {
    if (isTreatmentEmpty(L)) {
        first(L) = P;
        last(L) = P;
    } else {
        next(last(L)) = P;
        prev(P) = last(L);
        last(L) = P;
    }
}

void deleteTreatmentLast(ListTreatment &L, treatmentAddress &P) {
    if (isTreatmentEmpty(L)) {
        cout << "List perawatan kosong, tidak ada yang bisa dihapus." << endl;
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

bool isTreatmentEmpty(ListTreatment L) {
    return first(L) == nil;
}

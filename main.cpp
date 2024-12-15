#include "menu.h"
#include "doctor.h"
#include "treatment.h"
#include "patient.h"
#include "base.h"

int main() {
    int mainMenu, doctorMenu, treatmentMenu, patientMenu;
    doctorAddress elmDoctor;
    treatmentAddress elmTreatment;
    patientAddress elmPatient;
    ListDoctor doctorList;
    ListTreatment treatmentList;
    ListPatient patientList;

    createNewListDoctor(doctorList);
    createNewListTreatment(treatmentList);
    createNewListPatient(patientList);

    mainMenu = selectMenu();
    while (mainMenu != 0) {
        switch (mainMenu) {
            case 1:
                doctorMenu = selectDoctorMenu();
                // TODO
                break;
            case 2:
                treatmentMenu = selectTreatmentMenu();
                // TODO
                break;
            case 3:
                patientMenu = selectPatientMenu();
                // TODO
                break;
            case 0:
                break;
        }
        mainMenu = selectMenu();
    }

    return 0;
}

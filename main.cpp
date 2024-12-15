#include "menu.h"
#include "doctor.h"
#include "treatment.h"
#include "patient.h"
#include "base.h"

int main() {
    ListDoctor doctorList;
    ListTreatment treatmentList;
    ListPatient patientList;

    createNewListDoctor(doctorList);
    createNewListTreatment(treatmentList);
    createNewListPatient(patientList);

    int mainMenu = selectMenu();
    while (mainMenu != 0) {
        switch (mainMenu) {
            case 1:
                selectDoctorMenu();
                break;
            case 2:
                selectTreatmentMenu();
                break;
            case 3:
                selectPatientMenu();
                break;
            case 0:
                break;
        }
        mainMenu = selectMenu();
    }

    return 0;
}

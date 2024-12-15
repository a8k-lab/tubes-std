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
    
    // Variabel untuk input data
    doctorInfo docInfo;
    treatmentInfo treatInfo;
    patientInfo patInfo;
    string searchName;

    createNewListDoctor(doctorList);
    createNewListTreatment(treatmentList);
    createNewListPatient(patientList);

    mainMenu = selectMenu();
    while (mainMenu != 0) {
        switch (mainMenu) {
            case 1:
                doctorMenu = selectDoctorMenu();
                while (doctorMenu != 0) {
                    switch (doctorMenu) {
                        case 1: // Tambah Dokter
                            cout << "Masukkan nama dokter: ";
                            cin >> docInfo.name;
                            cout << "Masukkan spesialisasi: ";
                            cin >> docInfo.speciality;
                            cout << "Masukkan umur: ";
                            cin >> docInfo.age;
                            elmDoctor = allocateDoctor(docInfo);
                            insertDoctorLast(doctorList, elmDoctor);
                            break;
                        case 2: // Hapus Dokter
                            deleteDoctorLast(doctorList, elmDoctor);
                            break;
                        case 3: // Cari Dokter
                            cout << "Masukkan nama dokter: ";
                            cin >> searchName;
                            elmDoctor = findDoctor(doctorList, searchName);
                            if (elmDoctor != nil) {
                                cout << "Dokter ditemukan!" << endl;
                                cout << info(elmDoctor).name << " " 
                                    << info(elmDoctor).speciality << " " 
                                    << info(elmDoctor).age << endl;
                            } else {
                                cout << "Dokter tidak ditemukan!" << endl;
                            }
                            break;
                        case 4: // Tampilkan semua data Dokter
                            printListDoctor(doctorList);
                            break;
                        case 5: // Tampilkan Dokter berdasarkan Pasien
                            cout << "Masukkan nama pasien: ";
                            cin >> searchName;
                            printListDoctorByPatient(doctorList, searchName);
                            break;
                        case 6: // Tampilkan Dokter dan relasinya
                            // (Sudah tercakup di menu 4)
                            printListDoctor(doctorList);
                            break;
                        case 7: // Total Pasien pada Dokter tertentu
                            cout << "Masukkan nama dokter: ";
                            cin >> searchName;
                            printTotalPatientByDoctor(doctorList, searchName);
                            break;
                        case 8: // Dokter tanpa Pasien
                            printListDoctorNoPatient(doctorList);
                            break;
                    }
                    doctorMenu = selectDoctorMenu();
                }
                break;
                
            case 2:
                treatmentMenu = selectTreatmentMenu();
                while (treatmentMenu != 0) {
                    switch (treatmentMenu) {
                        case 1: // Tambah Perawatan
                            cout << "Masukkan nama perawatan: ";
                            cin >> treatInfo.name;
                            cout << "Masukkan harga: ";
                            cin >> treatInfo.price;
                            cout << "Masukkan durasi: ";
                            cin >> treatInfo.duration;
                            elmTreatment = allocateTreatment(treatInfo);
                            insertTreatmentLast(treatmentList, elmTreatment);
                            break;
                        case 2: // Hapus Perawatan
                            deleteTreatmentLast(treatmentList, elmTreatment);
                            break;
                        case 3: // Edit relasi
                            // Implementasi edit relasi
                            cout << "Fitur dalam pengembangan" << endl;
                            break;
                        case 4: // Cek relasi
                            string docName, patName;
                            cout << "Masukkan nama dokter: ";
                            cin >> docName;
                            cout << "Masukkan nama pasien: ";
                            cin >> patName;
                            if (isRelation(treatmentList, docName, patName)) {
                                cout << "Dokter dan Pasien memiliki relasi" << endl;
                            } else {
                                cout << "Dokter dan Pasien tidak memiliki relasi" << endl;
                            }
                            break;
                    }
                    treatmentMenu = selectTreatmentMenu();
                }
                break;
                
            case 3:
                patientMenu = selectPatientMenu();
                while (patientMenu != 0) {
                    switch (patientMenu) {
                        case 1: // Tambah Pasien
                            cout << "Masukkan nama pasien: ";
                            cin >> patInfo.name;
                            cout << "Masukkan jenis kelamin: ";
                            cin >> patInfo.gender;
                            cout << "Masukkan umur: ";
                            cin >> patInfo.age;
                            elmPatient = allocatePatient(patInfo);
                            insertPatientLast(patientList, elmPatient);
                            break;
                        case 2: // Hapus Pasien
                            patientAddress tempPatient;
                            deletePatientLast(patientList, tempPatient);
                            break;
                        case 3: // Cari Pasien
                            cout << "Masukkan nama pasien: ";
                            cin >> searchName;
                            elmPatient = findPatient(patientList, searchName);
                            if (elmPatient != nil) {
                                cout << "Pasien ditemukan!" << endl;
                                cout << info(elmPatient).name << " " 
                                    << info(elmPatient).gender << " " 
                                    << info(elmPatient).age << endl;
                            } else {
                                cout << "Pasien tidak ditemukan!" << endl;
                            }
                            break;
                        case 4: // Tampilkan semua Pasien
                            printListPatient(patientList);
                            break;
                        case 5: // Tampilkan Pasien berdasarkan Dokter
                            cout << "Masukkan nama dokter: ";
                            cin >> searchName;
                            printListPatientByDoctor(patientList, searchName);
                            break;
                        case 6: // Tampilkan detail Pasien
                            cout << "Masukkan nama pasien: ";
                            cin >> searchName;
                            printPatientDetails(patientList, searchName);
                            break;
                        case 7: // Total Dokter yang menangani Pasien
                            cout << "Masukkan nama pasien: ";
                            cin >> searchName;
                            printTotalDoctorByPatient(patientList, searchName);
                            break;
                        case 8: // Total Pasien tanpa Dokter
                            printTotalPatientNoDoctor(patientList);
                            break;
                    }
                    patientMenu = selectPatientMenu();
                }
                break;
        }
        mainMenu = selectMenu();
    }

    return 0;
}

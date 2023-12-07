// HospitalManagementSystem.cpp
#include "Patient.h"
#include "Doctor.h"

int main() {
    // Create patients
    Patient patient1("John Doe", 25, "Fever");
    Patient patient2("Jane Smith", 30, "Broken Leg");

    // Create doctors
    Doctor doctor1("Dr. Smith", "Cardiologist");
    Doctor doctor2("Dr. Johnson", "Orthopedic Surgeon");

    // Assign patients to doctors
    doctor1.assignPatient(patient1);
    doctor2.assignPatient(patient2);

    // Display information
    patient1.displayInfo();
    patient2.displayInfo();

    doctor1.displayInfo();
    doctor1.displayAssignedPatients();

    doctor2.displayInfo();
    doctor2.displayAssignedPatients();

    return 0;
}

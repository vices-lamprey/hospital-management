// Doctor.cpp
#include <iostream>
#include <string>
#include <vector>
#include "Doctor.h"
#include "Patient.h"

Doctor::Doctor(const std::string& name, const std::string& specialization) {
    this->name = name;
    this->specialization = specialization;
}

// Implement getters and setters here (not shown for brevity)

void Doctor::assignPatient(const Patient& patient) {
    assignedPatients.push_back(patient);
}

void Doctor::displayInfo() const {
    std::cout << "Doctor Information:\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Specialization: " << specialization << "\n";
}

// Doctor.h
#pragma once
#include <string>
#include <vector>
#include "Patient.h"

class Doctor {
public:
    Doctor(const std::string& name, const std::string& specialization);

    // Implement getters and setters here (not shown for brevity)

    void assignPatient(const Patient& patient);
    void displayInfo() const;
    void displayAssignedPatients() const;

private:
    std::string name;
    std::string specialization;
    std::vector<Patient> assignedPatients;
};

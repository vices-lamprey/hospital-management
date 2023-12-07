// Patient.cpp
#include <iostream>
#include <string>
#include "Patient.h"

Patient::Patient(const std::string& name, int age, const std::string& healthCondition) {
    this->name = name;
    this->age = age;
    this->healthCondition = healthCondition;
}

// Implement getters and setters here (not shown for brevity)

void Patient::displayInfo() const {
    std::cout << "Patient Information:\n";
    std::cout << "Name: " << name << "\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "Health Condition: " << healthCondition << "\n";
}

// Patient.h
#pragma once
#include <string>

class Patient {
public:
    Patient(const std::string& name, int age, const std::string& healthCondition);

    // Implement getters and setters here (not shown for brevity)

    void displayInfo() const;

private:
    std::string name;
    int age;
    std::string healthCondition;
};

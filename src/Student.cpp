#include "../include/Student.h"
#include <iostream>

Student::Student() {}

Student::Student(int id, const std::string& name, int age)
    : id(id), name(name), age(age) {}

int Student::getId() const { return id; }
std::string Student::getName() const { return name; }
int Student::getAge() const { return age; }

void Student::setName(const std::string& name) { this->name = name; }
void Student::setAge(int age) { this->age = age; }

void Student::display() const {
    std::cout << "ID: " << id << ", Name: " << name << ", Age: " << age << "\n";
}

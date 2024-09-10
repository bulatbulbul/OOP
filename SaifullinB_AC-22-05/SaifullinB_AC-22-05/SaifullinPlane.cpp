#include "SaifullinPlane.h"
#include <iostream>

SaifullinPlane::SaifullinPlane() : name(""), capacity(0) {}

SaifullinPlane::SaifullinPlane(const string& name, int capacity) : name(name), capacity(capacity) {}

void SaifullinPlane::readFromConsole() {
    cout << "Введите имя самолета: ";
    cin >> name;
    cout << "Введите вместимость самолета: ";
    cin >> capacity;
}

void SaifullinPlane::writeToConsole() const {
    cout << "Самолет: " << name << ", Вместимость: " << capacity << " пассажиров" << endl;
}

void SaifullinPlane::readFromFile(ifstream& in) {
    in >> name >> capacity;
}

void SaifullinPlane::writeToFile(ofstream& out) const {
    out << name << " " << capacity << endl;
}

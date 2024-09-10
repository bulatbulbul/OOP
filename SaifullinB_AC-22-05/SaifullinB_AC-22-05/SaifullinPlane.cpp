#include "SaifullinPlane.h"
#include <iostream>

SaifullinPlane::SaifullinPlane() : name(""), capacity(0) {}

SaifullinPlane::SaifullinPlane(const string& name, int capacity) : name(name), capacity(capacity) {}

void SaifullinPlane::readFromConsole() {
    cout << "������� ��� ��������: ";
    cin >> name;
    cout << "������� ����������� ��������: ";
    cin >> capacity;
}

void SaifullinPlane::writeToConsole() const {
    cout << "�������: " << name << ", �����������: " << capacity << " ����������" << endl;
}

void SaifullinPlane::readFromFile(ifstream& in) {
    in >> name >> capacity;
}

void SaifullinPlane::writeToFile(ofstream& out) const {
    out << name << " " << capacity << endl;
}

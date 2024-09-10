#include "SaifullinPlane.h"
#include <iostream>

SaifullinPlane::SaifullinPlane() : name(""), capacity(0), mass(0), speed(0) {}

SaifullinPlane::SaifullinPlane(const string& name, int capacity, int mass, int speed)
    : name(name), capacity(capacity), mass(mass), speed(speed) {}

void SaifullinPlane::readFromConsole() {
    cout << "������� ��� ��������: ";
    cin >> name;
    cout << "������� ����������� ��������: ";
    cin >> capacity;
    cout << "������� ����� �������� (� ������): ";
    cin >> mass;
    cout << "������� �������� �������� (� ��/�): ";
    cin >> speed;
}

void SaifullinPlane::writeToConsole() const {
    cout << "�������: " << name << ", �����������: " << capacity << " ����������, �����: " << mass << " ����, ��������: " << speed << " ��/�" << endl;
}

void SaifullinPlane::readFromFile(ifstream& in) {
    in >> name >> capacity >> mass >> speed;
}

void SaifullinPlane::writeToFile(ofstream& out) const {
    out << name << " " << capacity << " " << mass << " " << speed << endl;
}

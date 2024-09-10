#include "SaifullinPlane.h"
#include <iostream>

SaifullinPlane::SaifullinPlane() : name(""), capacity(0), mass(0), speed(0) {}

SaifullinPlane::SaifullinPlane(const string& name, int capacity, int mass, int speed)
    : name(name), capacity(capacity), mass(mass), speed(speed) {}

void SaifullinPlane::readFromConsole() {
    cout << "Введите имя самолета: ";
    cin >> name;
    cout << "Введите вместимость самолета: ";
    cin >> capacity;
    cout << "Введите массу самолета (в тоннах): ";
    cin >> mass;
    cout << "Введите скорость самолета (в км/ч): ";
    cin >> speed;
}

void SaifullinPlane::writeToConsole() const {
    cout << "Самолет: " << name << ", Вместимость: " << capacity << " пассажиров, Масса: " << mass << " тонн, Скорость: " << speed << " км/ч" << endl;
}

void SaifullinPlane::readFromFile(ifstream& in) {
    in >> name >> capacity >> mass >> speed;
}

void SaifullinPlane::writeToFile(ofstream& out) const {
    out << name << " " << capacity << " " << mass << " " << speed << endl;
}

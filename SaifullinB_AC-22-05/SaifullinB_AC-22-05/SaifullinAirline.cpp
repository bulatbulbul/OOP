#include "SaifullinAirline.h"
#include <fstream>
#include <iostream>

void SaifullinAirline::addPlane(SaifullinPlane* plane) {
    planes.push_back(plane);
}

void SaifullinAirline::displayPlanes() const {
    for (const SaifullinPlane* plane : planes) {
        plane->writeToConsole();
    }
}

void SaifullinAirline::readFromFile(const string& filename) {
    ifstream inFile(filename);
    if (!inFile) {
        cerr << "Ошибка при открытии файла." << endl;
        return;
    }

    SaifullinPlane* plane = nullptr;
    while (inFile) {
        plane = new SaifullinPlane();
        plane->readFromFile(inFile);
        if (inFile) {
            addPlane(plane);
        }
        else {
            delete plane; 
        }
    }

    inFile.close();
}

void SaifullinAirline::writeToFile(const string& filename) const {
    ofstream outFile(filename);
    if (!outFile) {
        cerr << "Ошибка при создании файла." << endl;
        return;
    }

    for (const SaifullinPlane* plane : planes) {
        plane->writeToFile(outFile);
    }

    outFile.close();
}

void SaifullinAirline::clearPlanes() {
    for (SaifullinPlane* plane : planes) {
        delete plane;  
    }
    planes.clear();
}

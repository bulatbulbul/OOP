#pragma once
#include "SaifullinPlane.h"
#include <vector>

class SaifullinAirline {
public:
    ~SaifullinAirline();
    void addPlane(SaifullinPlane* plane);
    void displayPlanes() const;
    void readFromFile(const string& filename);
    void writeToFile(const string& filename) const;
    void clearPlanes();

private:
    vector<SaifullinPlane*> planes;
};

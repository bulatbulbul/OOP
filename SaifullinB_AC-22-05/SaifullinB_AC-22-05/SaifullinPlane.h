#pragma once
#include <string>
#include <fstream>

using namespace std;

class SaifullinPlane {
public:
    SaifullinPlane();
    SaifullinPlane(const string& name, int capacity);

    void readFromConsole();           
    void writeToConsole() const;      
    void readFromFile(ifstream& in);  
    void writeToFile(ofstream& out) const; 

private:
    string name;      
    int capacity;      
};

#include "SaifullinAirline.h"
#include <iostream>
#include <windows.h>

using namespace std;

void showMenu() {
    cout << "\nМеню:" << endl;
    cout << "1. Добавить новый самолет" << endl;
    cout << "2. Показать все самолеты" << endl;
    cout << "3. Загрузить самолеты из файла" << endl;
    cout << "4. Сохранить самолеты в файл" << endl;
    cout << "5. Очистить список самолетов" << endl;
    cout << "6. Выйти" << endl;
    cout << "Выберите действие (1-6): ";
}

int getUserChoice() {
    int choice;
    while (!(cin >> choice) || choice < 1 || choice > 6) {
        cout << "Некорректный ввод. Пожалуйста, введите число от 1 до 6: ";
        cin.clear(); 
    }
    return choice;
}


void handleAddPlane(SaifullinAirline& airline) {
    SaifullinPlane* plane = new SaifullinPlane();
    plane->readFromConsole();
    airline.addPlane(plane);
}

void handleDisplayPlanes(const SaifullinAirline& airline) {
    airline.displayPlanes();
}

void handleLoadFromFile(SaifullinAirline& airline) {
    string filename;
    cout << "Введите имя файла для загрузки: ";
    cin >> filename;
    airline.readFromFile(filename);
}

void handleSaveToFile(const SaifullinAirline& airline) {
    string filename;
    cout << "Введите имя файла для сохранения: ";
    cin >> filename;
    airline.writeToFile(filename);
}

void handleClearPlanes(SaifullinAirline& airline) {
    airline.clearPlanes();
    cout << "Список самолетов успешно очищен." << endl;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    SaifullinAirline airline;
    bool running = true;

    while (running) {
        showMenu();
        int choice = getUserChoice();

        switch (choice) {
        case 1:
            handleAddPlane(airline);
            break;
        case 2:
            handleDisplayPlanes(airline);
            break;
        case 3:
            handleLoadFromFile(airline);
            break;
        case 4:
            handleSaveToFile(airline);
            break;
        case 5:
            handleClearPlanes(airline);
            break;
        case 6:
            running = false;
            break;
        default:
            cout << "Неверный выбор. Пожалуйста, выберите вариант от 1 до 6." << endl;
            break;
        }
    }

    return 0;
}

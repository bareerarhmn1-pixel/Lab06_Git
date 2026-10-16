#include <iostream>
#include <string>
using namespace std;
int main() {
    int command, batteryLevel;
    cout << "Enter command (1-4): ";
    cin >> command;
    cout << "Enter battery level (0-100): ";
    cin >> batteryLevel;
    cout << "\n--- Rover Enhancement Status Report ---" << endl;
    cout << "Power Status: " << ((batteryLevel >= 50) ? "POWER OK" : "LOW POWER") << endl;
    cout << "Executed Action: ";
    switch (command) {
        case 1:
            cout << "Capture panorama" << endl;
            break;
        case 2:
            cout << "Collect rock sample" << endl;
            break;
        case 3:
            cout << "Transmit data" << endl;
            break;
        case 4:
            cout << "Return to base" << endl;
            break;
        default:
            cout << "Invalid rover command" << endl;
            break;}
    return 0; }
    
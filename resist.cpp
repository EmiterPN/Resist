#include <iostream>
#include "resist.h"

using namespace std;

void initResistor(Resistor& r) {
    cout << "Enter resistance (Ohm): ";
    cin >> r.resistance;
    if (r.resistance < 0) r.resistance = 0;

    cout << "Enter max power (Watt): ";
    cin >> r.max_power;
    if (r.max_power < 0) r.max_power = 0;

    cout << endl;
}

void initResistors(Resistor* resistors, int size) {
    for (int i = 0; i < size; i++) {
        cout << "Resistor #" << i + 1 << endl;
        initResistor(resistors[i]);
    }
}

void showResistor(const Resistor& r) {
    cout << "Resistance = " << r.resistance << " Ohm" << endl;
    cout << "Max power = " << r.max_power << " Watt" << endl;
}

void showResistors(const Resistor* resistors, int size) {
    for (int i = 0; i < size; i++) {

        showResistor(resistors[i]);

    }
}

void checkResistors(const Resistor* resistors, int size, double voltage) {
    for (int i = 0; i < size; i++) {
        double current = voltage / resistors[i].resistance;
        double power = current * current * resistors[i].resistance;
        if (power > resistors[i].max_power) {
            cout << "Resistor #" << i + 1 << " has been burned" << endl;
        }
        else {
            cout << "Resistor #" << i + 1 << " is good" << endl;
        }
    }
}
#include <iostream>
#include "resist.h"

using namespace std;

int main() {
    Resistor r1;
    initResistor(r1);
    showResistor(r1);
    int n;
    cout << "Enter number of resistors: ";
    cin >> n;
    Resistor* rArr = new Resistor[n];
    initResistors(rArr, n);
    showResistors(rArr, n);
    double voltage;
    cout << "Enter voltage (V): ";
    cin >> voltage;
    checkResistors(rArr, n, voltage);
    delete[] rArr;
    return 0;
}
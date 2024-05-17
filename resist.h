#ifndef RESIST_H
#define RESIST_H

struct Resistor {
    double resistance;
    double max_power;
};

void initResistor(Resistor& r);
void initResistors(Resistor* resistors, int size);
void showResistor(const Resistor& r);
void showResistors(const Resistor* resistors, int size);
void checkResistors(const Resistor* resistors, int size, double voltage);

#endif
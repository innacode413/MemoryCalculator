#include "memory_calc.h"

Calculator::Calculator() {
    memory = 0;
}

Calculator::Calculator(int startValue) {
    memory = startValue;
}

void Calculator::setStartValue(int value) {
    memory = value;
}

int Calculator::calculate(char operation, int value) {
    if (operation == '+') {
        memory += value;
    } else if (operation == '-') {
        memory -= value;
    } else if (operation == '*') {
        memory *= value;
    } else if (operation == '/') {
        if (value != 0) {
            memory /= value;
        }
    }
    return memory;
}

int Calculator::getMemory() const {
    return memory;
}

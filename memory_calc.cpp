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

Calculator& Calculator::calculate(const int& value, const char& operation) {
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
    return *this;
}

int Calculator::calculate(const int& value1, const int& value2, const char& operation) {
    if (operation == '+') {
        return value1 + value2;
    } else if (operation == '-') {
        return value1 - value2;
    } else if (operation == '*') {
        return value1 * value2;
    } else if (operation == '/') {
        if (value2 != 0) {
            return value1 / value2;
        }
    }
    return 0;
}

int Calculator::getMemory() const {
    return memory;
}

int Calculator::GetCurrentValue() const {
    return memory;
}

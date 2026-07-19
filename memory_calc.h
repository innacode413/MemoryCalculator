#pragma once

class Calculator {
public:
    Calculator();
    Calculator(int startValue);

    void setStartValue(int value);
    int calculate(char operation, int value);
    int getMemory() const;

private:
    int memory;
};

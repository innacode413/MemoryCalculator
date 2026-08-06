#include <iostream>
#include "memory_calc.h"

int main() {
    std::cout << "=== Тестування Calculator (Chain + Static + Exceptions) ===\n\n";

    Calculator calc1 = 10;
    std::cout << "calc1 (через Calculator calc1 = 10)\n";
    std::cout << "Початкова пам'ять calc1: " << calc1.GetCurrentValue() << "\n";

    try {
        int result = calc1.calculate(2, '+')
                          .calculate(4, '-')
                          .calculate(5, '*')
                          .GetCurrentValue();
        std::cout << "Chain: (10 + 2 - 4) * 5 = " << result << "\n";
    } catch (const std::exception& ex) {
        std::cout << "Виключення: " << ex.what() << "\n";
    }

    std::cout << "\n--- Перехоплення виключень ---\n";

    try {
        calc1.calculate(0, '/');
    } catch (const std::exception& ex) {
        std::cout << "Ділення на 0: " << ex.what() << "\n";
    }

    try {
        calc1.calculate(5, '%');
    } catch (const std::exception& ex) {
        std::cout << "Недопустима операція: " << ex.what() << "\n";
    }

    try {
        int r = Calculator::calculate(10, 0, '/');
        std::cout << "Static division result: " << r << "\n";
    } catch (const std::exception& ex) {
        std::cout << "Static ділення на 0: " << ex.what() << "\n";
    }

    std::cout << "\n--- Статичний метод ---\n";
    int staticResult = Calculator::calculate(10, 10, '+');
    std::cout << "Static: Calculator::calculate(10, 10, '+') = " << staticResult << "\n";

    return 0;
}

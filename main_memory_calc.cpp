#include <iostream>
#include "memory_calc.h"

int main() {
    std::cout << "=== Тестування Calculator (Chain + Static) ===\n\n";

    Calculator calc1 = 10;
    std::cout << "calc1 (через Calculator calc1 = 10)\n";
    std::cout << "Початкова пам'ять calc1: " << calc1.GetCurrentValue() << "\n";

    int result = calc1.calculate(2, '+')
                      .calculate(4, '-')
                      .calculate(5, '*')
                      .GetCurrentValue();
    std::cout << "Chain: (10 + 2 - 4) * 5 = " << result << "\n\n";

    Calculator calc2;
    std::cout << "calc2 (конструктор за замовчуванням)\n";
    std::cout << "Початкова пам'ять calc2: " << calc2.GetCurrentValue() << "\n";
    calc2.calculate(25, '+');
    std::cout << "calc2 після calculate(25, '+'): " << calc2.GetCurrentValue() << "\n\n";

    int staticResult = Calculator::calculate(10, 10, '+');
    std::cout << "Static: Calculator::calculate(10, 10, '+') = " << staticResult << "\n";

    return 0;
}

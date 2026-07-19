#include <iostream>
#include "memory_calc.h"

int main() {
    std::cout << "=== Тестування конструкторів Calculator ===\n\n";

    Calculator calc1 = 10;
    std::cout << "calc1 (створено через Calculator calc1 = 10)\n";
    std::cout << "Початкова пам'ять calc1: " << calc1.getMemory() << "\n";

    calc1.calculate('-', 10);
    std::cout << "calc1 після calculate('-', 10): " << calc1.getMemory() << "\n\n";

    Calculator calc2;
    std::cout << "calc2 (створено через конструктор за замовчуванням)\n";
    std::cout << "Початкова пам'ять calc2: " << calc2.getMemory() << "\n";

    calc2.calculate('+', 25);
    std::cout << "calc2 після calculate('+', 25): " << calc2.getMemory() << "\n\n";

    Calculator calc3(50);
    std::cout << "calc3 (створено через Calculator calc3(50))\n";
    std::cout << "Початкова пам'ять calc3: " << calc3.getMemory() << "\n";

    calc3.calculate('*', 2);
    std::cout << "calc3 після calculate('*', 2): " << calc3.getMemory() << "\n";

    return 0;
}

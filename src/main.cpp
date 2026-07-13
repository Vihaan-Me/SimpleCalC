#include<iostream>
#include "Calculator.h"

int main() {
    Calculator calc;

    double a = 10.0;
    double b = 5.0;

    std::cout << "Addition: " << calc.add(a, b) << std::endl;
    std::cout << "Subtraction: " << calc.subtract(a, b) << std::endl;
    std::cout << "Multiplication: " << calc.multiply(a, b) << std::endl;
    std::cout << "Division: " << calc.divide(a, b) << std::endl;
    std::cout << "Power: " << calc.power(a, b) << std::endl;
    std::cout << "Square Root of a: " << calc.squareRoot(a) << std::endl;

    return 0;
}
#include"Calculator.h"
#include<stdexcept>
#include<iostream>
#include<cassert>

int main() {
    Calculator calc;

    // Test addition
    assert(calc.add(2, 3) == 5);
    assert(calc.add(-1, 1) == 0);

    // Test subtraction
    assert(calc.subtract(5, 3) == 2);
    assert(calc.subtract(0, 5) == -5);

    // Test multiplication
    assert(calc.multiply(4, 5) == 20);
    assert(calc.multiply(-2, 3) == -6);

    // Test division
    assert(calc.divide(10, 2) == 5);
    try {
        calc.divide(10, 0);
        assert(false); // Should not reach here
    } catch (const std::invalid_argument& e) {
        assert(true); // Expected exception
    }

    // Test power
    assert(calc.power(2, 3) == 8);
    assert(calc.power(5, 0) == 1);

    // Test square root
    assert(calc.squareRoot(16) == 4);
    try {
        calc.squareRoot(-4);
        assert(false); // Should not reach here
    } catch (const std::invalid_argument& e) {
        assert(true); // Expected exception
    }

    std::cout << "All tests passed!" << std::endl;
    return 0;
}
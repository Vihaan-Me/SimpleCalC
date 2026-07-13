#include<iostream>
#include<cmath>
#include <stdexcept>
#include"Calculator.h"

    double Calculator::add(double a, double b) {
        return a + b;
    }

    double Calculator::subtract(double a, double b) {
        return a - b;
    }

    double Calculator::multiply(double a, double b) {
        return a * b;
    }

    double Calculator::divide(double a, double b) {
        if (b == 0) {
            throw std::invalid_argument("Division by zero is not allowed.");
        }
        return a / b;
    }

    double Calculator::power(double base, double exponent) {
        return std::pow(base, exponent);
    }

    double Calculator::squareRoot(double value) {
        if (value < 0) {
            throw std::invalid_argument("Square root of negative number is not allowed.");
        }
        return std::sqrt(value);
    }
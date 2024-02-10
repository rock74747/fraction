#include <iostream>
#include <string>
#include <cmath>
#include "fraction.hpp"




inline void Fraction::crack() {
    if (_znam == 0)
    {
        throw std::exception("Знаменатель не может быть 0");
    }
    if (_chisl == 0 && _znam == 1) {
        std::cout << NULL << std::endl;
    }
    if (abs(_chisl) >= abs(_znam)) {
        long long x = _chisl / _znam;
        _chisl = abs(_chisl) % abs(_znam);
        _znam = abs(_znam);
        std::cout << x << " " << _chisl << "/" << _znam << std::endl;
    }
    else
        std::cout << _chisl << "/" << _znam << std::endl;
}

inline void Fraction::znak() {
    if (_chisl * _znam >= 0) {
        std::cout << "Знак дроби положительный \n";
    }
    else
        std::cout << "Знак дроби отрицательный \n";
}

void Fraction::multiplication(long long a, long long b, long long c, long long d) {
    long long A = a * c;
    long long B = b * d;
    _chisl = A;
    _znam = B;
    znak();
    crack();
}

void Fraction::division(long long a, long long b, long long c, long long d) {
    long long A = a * d;
    long long B = b * c;
    _chisl = A;
    _znam = B;
    znak();
    crack();
}

void Fraction::addition(long long a, long long b, long long c, long long d) {
    long long x;
    x = b * d;
    long long A = x / b * a + x / d * c;
    long long B = x;
    _chisl = A;
    _znam = B;
    znak();
    crack();
}

void Fraction::subtraction(long long a, long long b, long long c, long long d) {
    long long x;
    x = b * d;
    long long A = x / b * a - x / d * c;
    long long B = x;
    _chisl = A;
    _znam = B;
    znak();
    crack();
}

double Fraction::D_chislo(long long a, long long b) {
    double X = static_cast<double>(a) / static_cast<double>(b);
    return X;
}




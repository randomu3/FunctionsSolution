#include <iostream>

double Power(double base, int exponent);
unsigned long long Factorial(int n);

int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    int exponent;

    // Запрос числа для факториала
    std::cout << "Вычисление факториала числа.\n";
    std::cout << "Введите число: ";
    std::cin >> number;
    std::cout << "Факториал числа " << number << " равен " << Factorial(number) << std::endl;

    // Запрос числа и степени для возведения в степень
    std::cout << "Возведение числа в степень.\n";
    std::cout << "Введите число: ";
    std::cin >> number;
    std::cout << "Введите степень: ";
    std::cin >> exponent;
    std::cout << "Число " << number << " в степени " << exponent << " равно " << Power(number, exponent) << std::endl;

    return 0;
}

// Функция для вычисления факториала
unsigned long long Factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * Factorial(n - 1);
    }
}

// Функция для возведения числа в степень
double Power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
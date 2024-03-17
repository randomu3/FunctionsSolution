#include <iostream>

double Power(double base, int exponent);
unsigned long long Factorial(int n);

int main() {
    setlocale(LC_ALL, "Russian");
    int number;
    int exponent;

    // ������ ����� ��� ����������
    std::cout << "���������� ���������� �����.\n";
    std::cout << "������� �����: ";
    std::cin >> number;
    std::cout << "��������� ����� " << number << " ����� " << Factorial(number) << std::endl;

    // ������ ����� � ������� ��� ���������� � �������
    std::cout << "���������� ����� � �������.\n";
    std::cout << "������� �����: ";
    std::cin >> number;
    std::cout << "������� �������: ";
    std::cin >> exponent;
    std::cout << "����� " << number << " � ������� " << exponent << " ����� " << Power(number, exponent) << std::endl;

    return 0;
}

// ������� ��� ���������� ����������
unsigned long long Factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n * Factorial(n - 1);
    }
}

// ������� ��� ���������� ����� � �������
double Power(double base, int exponent) {
    double result = 1.0;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
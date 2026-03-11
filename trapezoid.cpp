#include <iostream>
using namespace std;

// Функция для вычисления периметра трапеции
double perimeter(double a, double b, double c, double d) {
    return a + b + c + d;
}

// Функция для вычисления площади трапеции
double area(double a, double b, double h) {
    return (a + b) / 2.0 * h;
}

// Функция для вычисления длины средней линии
double midLine(double a, double b) {
    return (a + b) / 2.0;
}

int main() {
    double a, b, c, d, h;
    
    cout << "Введите верхнее основание (a): ";
    cin >> a;
    cout << "Введите нижнее основание (b): ";
    cin >> b;
    cout << "Введите левую боковую сторону (c): ";
    cin >> c;
    cout << "Введите правую боковую сторону (d): ";
    cin >> d;
    cout << "Введите высоту (h): ";
    cin >> h;
    
    cout << "\nПериметр трапеции: " << perimeter(a, b, c, d) << endl;
    cout << "Площадь трапеции: " << area(a, b, h) << endl;
    cout << "Средняя линия: " << midLine(a, b) << endl;
    
    return 0;
}
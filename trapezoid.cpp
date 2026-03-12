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

<<<<<<< HEAD
int main() {
    double a, b, c, d, h;
    
=======
// Функция проверки существования трапеции
bool isTrapezoidValid(double a, double b, double c, double d, double h) {
    // 1. Проверка на положительность
    if (a <= 0 || b <= 0 || c <= 0 || d <= 0 || h <= 0) {
        cout << "Ошибка: все стороны и высота должны быть положительными!" << endl;
        return false;
    }
    
    // 2. Проверка: боковые стороны не могут быть короче разницы оснований
    // (упрощённая геометрическая проверка существования трапеции)
    double baseDiff = (a > b) ? (a - b) : (b - a); // модуль разности оснований
    
    if (baseDiff > c + d) {
        cout << "Ошибка: боковые стороны слишком короткие для такой разницы оснований!" << endl;
        return false;
    }
    
    // 3. Проверка: Высота не может быть больше боковой стороны
    if (h > c || h > d) {
        cout << "Ошибка: высота не может быть больше боковой стороны!" << endl;
        return false;
    }
    return true;
}

int main() {
    double a, b, c, d, h;
    
    cout << "Вычисление параметров трапеции" << endl;
>>>>>>> Roma
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
    
<<<<<<< HEAD
    cout << "\nПериметр трапеции: " << perimeter(a, b, c, d) << endl;
=======
    // Проверяем, существует ли такая трапеция
    if (!isTrapezoidValid(a, b, c, d, h)) {
        return 1; // Завершаем программу с ошибкой
    }
    
    // Если проверка пройдена — вычисляем и выводим результаты
    cout << "\nРезультаты" << endl;
    cout << "Периметр трапеции: " << perimeter(a, b, c, d) << endl;
>>>>>>> Roma
    cout << "Площадь трапеции: " << area(a, b, h) << endl;
    cout << "Средняя линия: " << midLine(a, b) << endl;
    
    return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

double length, width;

double perimeter ()
{
    return 2 * (length + width);
}

double square ()
{
    return length * width;
}

double diagonal ()
{
    return sqrt(pow(length, 2) + pow(width, 2));
}

int main ()
{
    cout << "Введите длину: ";
    cin >> length;
    cout << "Введите ширину: ";
    cin >> width;
    cout << "Периметр: " << perimeter() << endl;
    cout << "Площадь: " << square() << endl;
    cout << "Диагональ: " << diagonal() << endl;
    return 0;

}
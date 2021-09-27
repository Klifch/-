#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    long long a, b, c; //Введемо три довiльнi сторони трикутника
    cout << "Введiть три сторони трикутника" << endl;
    cin >> a >> b >> c;
    double radians_a = acos((pow(b,2) + pow(c,2) - pow(a,2)) / (2 * b * c)); //Розрахуємо всi кути трикутника в радiанах
    double radians_b = acos((pow(c,2) + pow(a,2) - pow(b,2)) / (2 * c * a)); //Розрахуємо всi кути трикутника в радiанах
    double radians_c = acos((pow(a,2) + pow(b,2) - pow(c,2)) / (2 * a * b)); //Розрахуємо всi кути трикутника в радiанах
    cout << "Кут протилежний катету A в радiанах: " << radians_a << endl
        << "Кут протилежний катету B в радiанах: " << radians_b << endl
        << "Кут протилежний катету C в радiанах: " << radians_c << endl
        << "Кут протилежний катету A в градусах: " << radians_a * (180 / M_PI) << endl //Розрахуємо всi кути трикутника в градусах
        << "Кут протилежний катету B в градусах: " << radians_b * (180 / M_PI) << endl //Розрахуємо всi кути трикутника в градусах
        << "Кут протилежний катету C в градусах: " << radians_c * (180 / M_PI) << endl; //Розрахуємо всi кути трикутника в градусах
}
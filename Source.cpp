#include <iostream>
#include <stdio.h>

using namespace std;

class Fraction
{
private:
    int num;
    int znam;

public:
    Fraction(int num_P = 0, int znam_P = 1) : num(num_P), znam(znam_P) {}

    Fraction operator+(const Fraction& d)
    {
        int num_P = num * d.znam + d.num * znam;
        int znam_P = znam * d.znam;

        return num_P, d;
    }

    Fraction operator-(const Fraction& f)
    {
        int n = num * f.znam - f.num * znam;
        int d = znam * f.znam;

        return n, d;
    }

    Fraction operator*(const Fraction& f)
    {
        int n = num * f.num;
        int d = znam * f.znam;

        return n, d;
    }

    Fraction operator/(const Fraction& f)
    {
        int n = num * f.znam;
        int d = znam * f.num;

        return n, d;
    }

    void print()
    {
        cout << num << "/" << znam << '\n';
    }
};

int main()
{
    setlocale(LC_ALL, "Rus");

    int a, b, d, c;

    cout << "Введите значения для первой дроби: ";
    cin >> a >> b;
    cout << "Введите значения для второй дроби: ";
    cin >> d >> c;

    Fraction d_1(a, b);
    Fraction d_2(d, c);
    Fraction res = d_1 + d_2;

    cout << "\nПосле вычетания: ";

    res = d_1 - d_2;
    res.print();

    cout << "После сложения: ";

    res = d_1 + d_2;
    res.print();

    cout << "После деления: ";

    res = d_1 / d_2;
    res.print();

    cout << "После умножения: ";

    res = d_1 * d_2;
    res.print();
    return 0;
}
#include <iostream>
#include <cmath>

using namespace std;

double factorial(int n){
    return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

class Sinus{
public:
    virtual double print(long long i, double x){
        return pow((-1),i)*pow(x, (2*i+1))/factorial(2*i+1);
    }
};

class Cosinus{
public:
    virtual double print(long long i, double x){
        return i == 0 ? 1 : pow((-1), i)*pow(x,(2*i))/factorial(2*i);
    }
};

int main() {
    long long i_f, i_s;
    double x_f, x_s;
    Sinus sinus;
    Cosinus cosinus;
    cout << "Введите номер элемента для синуса: ";
    cin >> i_f;
    cout << "Введите значение аргумента для синуса: ";
    cin >> x_f;
    cout << "Значение в синусе: ";
    cout << sinus.print(i_f, x_f) << "\n";
    cout << "Введите номер элемента для косинуса: ";
    cin >> i_s;
    cout << "Введите значение аргумента для косинуса: ";
    cin >> x_s;
    cout << "Значение в косинусе: ";
    cout << cosinus.print(i_s, x_s);
}

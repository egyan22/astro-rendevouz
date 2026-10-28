#include <iostream>
#include <cmath>
#include <numbers>

int main()
{
    constexpr double PI = 3.14159265358979323846;
    double degrees;
    std::cout << "Enter angle in degrees: ";
    std::cin >> degrees;

    double radians = degrees * PI / 180.0;
    std::cout << degrees << " deg = " << radians << " rad\n";

    double km;
    std::cout << "Enter distance in km: ";
    std::cin >> km;

    double metres = km * 1000.0;
    std::cout << km << " km = " << metres << " m\n";

    return 0;
    

}
#include <iostream>
#include <cmath>

int main()  
{
    constexpr double PI = 3.14159265358979323846;
    const double mu = 398600.0; // km^3/s^2

    double radius_km; // radius in km
    std::cout << "Enter radius distance: ";
    std::cin >> radius_km;

    double circular_speed = std::sqrt(mu / radius_km);
    double period = 2 * PI * std::sqrt(std::pow(radius_km,3) / mu); // seconds(s)
    std::cout << " Speed = " << circular_speed <<" km/s" << " \n";
    std::cout << " Period = " << period << " s" << " \n";

    return 0;


}
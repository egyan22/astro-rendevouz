   #include <cmath>
   #include <iostream>
   #include <numbers>

   int main()
   {
       constexpr double mu_km3_s2 = 398600.4418;  // Earth's gravity constant
       constexpr double radius_km = 6778.0;       // orbit radius

       const double speed_km_s = std::sqrt(mu_km3_s2 / radius_km);
       const double period_s = 2.0 * std::numbers::pi
                               * std::sqrt(radius_km * radius_km * radius_km / mu_km3_s2);

       std::cout << "Circular speed: " << speed_km_s << " km/s\n";
       std::cout << "Period: " << period_s << " s\n";
       return 0;
   }
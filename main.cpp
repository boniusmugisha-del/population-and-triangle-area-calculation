#include <iostream>
#include <cmath>

int main() {
    // 1. POPULATION CALCULATION
    double population, rate;
    int years;

    std::cout << "--- Population Calculation ---\n";
    std::cout << "Enter current population: ";
    std::cin >> population;
    std::cout << "Enter annual growth rate (%): ";
    std::cin >> rate;
    std::cout << "Enter number of years: ";
    std::cin >> years;

    // Calculate future population: P * (1 + r/100)^years
    double futurePopulation = population * std::pow(1.0 + (rate / 100.0), years);
    std::cout << "Projected population: " << futurePopulation << "\n\n";

    // 2. TRIANGLE AREA CALCULATION
    double a, b, c;

    std::cout << "--- Triangle Area Calculation ---\n";
    std::cout << "Enter side A: ";
    std::cin >> a;
    std::cout << "Enter side B: ";
    std::cin >> b;
    std::cout << "Enter side C: ";
    std::cin >> c;

    // Check if sides make a valid triangle before calculating
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        double s = (a + b + c) / 2.0; // semi-perimeter
        double area = std::sqrt(s * (s - a) * (s - b) * (s - c)); // Heron's formula
        std::cout << "Area of triangle: " << area << "\n";
    } else {
        std::cout << "Error: These side lengths cannot form a triangle.\n";
    }

    return 0;
}
// Updated code

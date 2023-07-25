// Program that converts Earth mass into its Mars equivalent.
#include <iostream>

int main() {

    // Define the variables for mass on Earth and Mars
    float mass_earth;
    float mass_mars;

    // Ask the user to input a weight value which is assigned to the variable mass_earth
    std::cout << "Earth weight (kg): ";
    std::cin >> mass_earth;

    // Convert input Earth mass to Mars mass and assign to variable mass_mars
    mass_mars = mass_earth / 2.66;

    // Print converted Mars equivalent mass
    std::cout << mass_earth << "kg on Earth is equivalant to " << mass_mars << "kg on Mars.";
    return 0;

}
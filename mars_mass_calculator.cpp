// Program that converts Earth mass into its Mars equivelant.
#include <iostream>

int main() {

// Define the variables for mass on earth and mars
float mass_earth;
float mass_mars;

// Ask the user to input a weight value which is assigned to the variable mass_earth
std::cout << "Earth weight (kg): ";
std::cin >> mass_earth;

// Convert inputed earth mass to mars mass and assign to variable mass_mars
mass_mars = mass_earth / 2.66;

// Print converted mars equivelant mass
std::cout << mass_earth << "kg on Earth is equivelant to " << mass_mars << "kg on Mars.";
return 0;


}
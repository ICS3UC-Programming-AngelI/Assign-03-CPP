// Copyright (c) 2025 Angel rights reserved.
// Created by: Angel
// Created on: April 6,2025
// This program  the user how many croissants
// they want and if they buy less than 6 croissants,
// they will pay HST(tax) and if they buy 6 or more croissants,
// they do not pay HST.

#include <iomanip>  // For formatting the display (setprecision)
#include <iostream>  // For display and putting croissants

int main() {
    const double HST = 0.13;                // HST tax rate
    const double PricePerCroissant = 2.55;  // Price per croissant

    int numCroissants;  // Variable to store user the number of croissants

    std::cout << "Enter the number of croissants ";  // asks the user to enter the number
    // of croissants
    std::cin >> numCroissants;  // stores the user number of croissants

    double subtotal = numCroissants * PricePerCroissant;  // calculates the subtotal by multiplying
    // the number of croissants by price per croissant
    double tax;  // declares a variable to store the tax calculated
    double total;  // declares a variable to store the total cost

    if (numCroissants < 6) {  // checks if the number of croissants is less than 6
        double tax = subtotal * HST;  // calculates the total tax if the croissants
        // is less than 6
        double total = subtotal + tax;  // calculates the total cost including tax
    } else {  // if the number is 6 or more than 6
        double tax = 0;  // the tax is going to be zero
        double total = subtotal;  // the total is going to be the same as subtotal
    }

    std::cout << std::fixed << std::setprecision(2);  // set the display answer to 
    // round to 2 decimal points
    std::cout << "Subtotal: $" << subtotal << std::endl;  // prints out the subtotal
    std::cout << "Tax: $" << tax << std::endl;  // prints out the tax amount
    std::cout << "Total Cost: $" << total << std::endl;  // prints the total cost
}

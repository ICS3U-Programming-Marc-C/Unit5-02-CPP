// Copyright (c) 2022 Coffi All rights reserved.
// Created by: Marc Coffi
// Date: May 2022
// This program calculates
// the area of a triangle

#include <iostream>

// Defining the function that calculates the area
void CalcArea(float height, float base) {
       float area = (height * base) / 2;
       std::cout << "The area is " << area << "cm^2\n";
}

int main() {
       // Declaring variables
       float userBaseAsF, userHeightAsF;
       std::string userBase, userHeight;

       // input
       std::cout << "Enter a height: ";
       std::cin >> userHeight;
       std::cout << "Enter a base: ";
       std::cin >> userBase;
       try {
              // Casting user input to floats
              userBaseAsF = std::stof(userBase);
              userHeightAsF = std::stof(userHeight);
              // Check if the input is greater than 0
              if (userBaseAsF > 0 && userHeightAsF > 0) {
                     CalcArea(userHeightAsF, userBaseAsF);
              } else {
              std::cout << "Invalid input. Please enter a natural";
              std::cout << "number to calculate the Area of a triangle.\n";
              }
       } catch (std::invalid_argument) {
              std::cout << "Invalid Input. Please enter";
              std::cout << "a proper value.\n";
       }
}

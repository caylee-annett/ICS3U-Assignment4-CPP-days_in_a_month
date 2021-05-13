// Copyright (c) 2021 Caylee Annett All rights reserved
//
// Created by Caylee Annett
// Created on May 2021
// This program prints the number of days in a month, including leap years

#include <iostream>
#include <string>

int main() {
    // This function tells the user how many days are in a month
    std::string month;
    std::string yearString;
    int yearInteger;

    // Input
    std::cout << "This program tells you how many days are in the month that "
        "you enter." << std::endl;
    std::cout << "Enter the name of a month (capitalize first letter): ";
    std::cin >> month;
    std::cout << "" << std::endl;

    // Process & Output
    if (month == "January" || month == "March" || month == "May"
        || month == "July" || month == "August" || month == "October"
        || month == "December") {
        std::cout << "There are 31 days in " << month << "." << std::endl;
    } else if (month == "April" || month == "June" || month == "September" ||
        month == "November") {
        std::cout << "There are 30 days in " << month << "." << std::endl;
    } else if (month == "February") {
        std::cout << "Enter the year to see if it is a leap year: ";
        std::cin >> yearString;
        try {
            yearInteger = std::stoi(yearString);

            if (yearInteger % 4 == 0) {
                if (yearInteger % 100 == 0 && yearInteger % 400 != 0) {
                    std::cout << "There are 28 days in February." << std::endl;
                } else {
                    std::cout << "There are 29 days in February." << std::endl;
                }
            } else {
                std::cout << "There are 28 days in February." << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << yearString << " is not a valid input." <<std::endl;
        }
    } else {
            std::cout <<  month << " is not a valid input." << std::endl;
    }
    std::cout << "" << std::endl;
    std::cout << "Done." << std::endl;
}

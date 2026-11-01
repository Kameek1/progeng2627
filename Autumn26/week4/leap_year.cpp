#include <iostream>

bool leap_year(int year) {
    if (year % 4 != 0) {
        return false;
    } else if (year % 100 != 0) {
        return true;
    } else if (year % 400 != 0) {
        return false;
    } else {
        return true;
    }
}

int main() {

    int input_year;

    std::cout << "please enter a year" << std::endl;
    std::cin >> input_year;

    if (leap_year(input_year)) {
        std::cout << input_year << " is a leap year." << std::endl;
    } else {
        std::cout << input_year << " is not a leap year." << std::endl;
    }

}
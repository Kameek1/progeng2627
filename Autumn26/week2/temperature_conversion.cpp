#include <iostream>

int main(){
    double C, F;
    std::cout << "what is the temprature in celsius" << std::endl;
    std::cin >> C;

    F = C * 1.8 + 32;

    std::cout << "the temperature is " << F << " farenheit";
    
}
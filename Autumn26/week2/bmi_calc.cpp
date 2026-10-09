#include <iostream>

int main(){
    double weight, height, BMI;
    std::cout << "what is your weight" << std::endl;
    
    std::cin >> weight;
    std::cout << "what is your height in cm" << std::endl;
    std::cin >> height;

    BMI= weight /( (height/100)*(height/100));

    std::cout << "your BMI is " <<BMI;
    
}
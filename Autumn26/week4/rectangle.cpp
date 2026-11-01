#include <iostream>

void rectangle_calc(double length, double height, double& area, double& perimeter){

    area = length * height;
    perimeter = length*2 + height*2;

}

int main(){

    double length, height, area, perimeter;

    std::cout << "please enter your rectangle's length and height" << std::endl;
    std::cin >> length >> height;

    rectangle_calc(length, height, area, perimeter);

    std::cout << "the rectangle's area is: " << area << std::endl;
    std::cout << "the rectangle's perimeter is: " << perimeter << std::endl;

}
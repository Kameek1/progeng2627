#include <iostream>

int main(){

    double gbp, exchange, euro;

    std::cout << "how many pounds do you have" << std::endl;
    std::cin >> gbp;
    std::cout << "how many euro is one pound worth" << std::endl;
    std::cin >> exchange;
    
    euro = gbp*exchange;

    std::cout << "you have " << euro << " euros";
}
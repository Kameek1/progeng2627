#include <iostream>

int main(){
    int n;

    std::cout << "what is your number" << std::endl;
    std::cin>> n;

    if (n%3 == 0){
        std::cout << "your number is a multiple of 3";
    }
    else{
        std::cout << "your number is not a multiple of 3";
    }
}
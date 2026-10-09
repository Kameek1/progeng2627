#include <iostream>

int main(){
    int n, rem;

    std::cout << "what is your number"<< std::endl;
    std::cin >>n;

    rem = n % 2;

    std::cout << "0 means even, 1 means odd" <<std::endl;
    std::cout << rem;
}
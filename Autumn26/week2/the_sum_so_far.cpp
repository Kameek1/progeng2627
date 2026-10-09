#include <iostream>

int main(){
    double sum, n;

    sum = 0;
    n= 1;

    while (n!=0){
        std::cout << "What is your number" << std::endl;
        std::cin >> n;
        sum = sum + n;
        std::cout << "the sum so far is: " << sum << std::endl;
    }
    
}
#include <iostream>

int main(){
    double average, n, m;

    average = 0;
    n = 1;
    m = 0;

    while (n!=0){
        std::cout << "What is your number" << std::endl;
        std::cin >> n;
        
        average = (average*m+n)/(m+1);
        m = m + 1;
        std::cout << "the sum so far is: " << average << std::endl;
    }
    
}
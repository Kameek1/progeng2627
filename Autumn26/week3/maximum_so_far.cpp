#include <iostream>

int main(){
    int max, n, min;
    
    std::cout << "Pick a number" << std::endl;
    std::cin >> n;

    max = n;
    min = n;

    std::cout << "the maximum so far is: " << max << std::endl;
    std::cout << "the minimum so far is: " << min << std::endl;
    
    while(n != 0){
        std::cout << "Pick a number" << std::endl;
        std::cin >> n;
        if (n > max){
            max = n;
        }
        if (n < min){
            min = n;
        }
        std::cout << "the maximum so far is: " << max << std::endl;
        std::cout << "the minimum so far is: " << min << std::endl;


    }
}
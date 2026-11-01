#include <iostream>
#include <cmath>

int main(){

    int x, n, sum = 0;
    std::cout << "please enter your base" << std::endl;
    std::cin >> x;
    std::cout << "please enter your power" <<std::endl;
    std::cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += std::pow(x, i);


    }

    std::cout << sum;

}

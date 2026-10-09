#include <iostream>

int main(){
    double n, abs;
    std::cout << "what is your number" << std::endl;
    std::cin >> n;

    if (n<0){
        abs = -n;
    }
    else{
        abs = n;
    }

    std::cout << "|" << n << "|" << "=" << abs;
}
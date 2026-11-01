#include <iostream>


double mypow(double base, int exp);
int main(){
    std::cout << "2^3: " << mypow(2, 3) << std::endl;
    std::cout << "0.5^2: " << mypow(0.5, 2) << std::endl;
    std::cout << "1^0: " << mypow(1, 0) << std::endl;
    std::cout << "2^-2: " << mypow(2, -2) << std::endl;
}

double mypow(double base, int exp){
    double total=1;
    if (exp >=0){
        for (int i = 1; i<=exp; i++){
            total *= base;
        }

    }
    else{
        for (int i = 1; i<=(-exp); i++){
            total /= base;
        }
    }
    return total;
}
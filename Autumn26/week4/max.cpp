#include <iostream>

double max(double a, double b, double c){
    if (a > b && a > c) {
        return a;
    } else if (b > a && b > c) {
        return b;
    } else {
        return c;
    }
}
int main() {
    double a, b, c;
    std::cout << "Enter three numbers" << std::endl;
    std::cin >> a >> b >> c;
    double maximum = max(a, b, c);
    std::cout << "The maximum number is: " << maximum << std::endl;
}
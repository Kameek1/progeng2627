#include <iostream>

void myswap(double& n1, double& n2){
    double tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

void sort_three_numbers(double& a, double& b, double& c){
    if (b < a) {
        myswap(a, b);
    }
    if  (c < b){
        myswap(b, c);
    }
    if (b < a) {
        myswap(a, b);
    }
}

int main(){
    double a, b, c;
    
    std::cout << "Please enter three numbers" << std::endl;
    std::cin >> a >> b >> c;



    sort_three_numbers(a, b, c);

    std::cout << "the sorted numbers are: " << a << " " << b << " " << c;



}
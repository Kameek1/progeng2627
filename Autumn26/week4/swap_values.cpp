// wrong version!
#include <iostream>
#include <string>

// type void means we are not returning anything

// this won't work!
void myswap(std::string& n1, std::string& n2){
    std::string tmp;
    tmp = n1;
    n1 = n2;
    n2 = tmp;
}

int main(){
    std::string n1, n2;

    std::cout << "please enter two words" << std::endl;
    std::cin >> n1 >> n2;

    std::cout << "you entered:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;

    myswap(n1, n2);

    std::cout << "after swapping the values:" << std::endl;
    std::cout << "n1: " << n1 << std::endl;
    std::cout << "n2: " << n2 << std::endl;
}
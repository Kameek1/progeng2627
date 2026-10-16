#include <iostream>

int main(){
    int n, counter;
    std::cout << "pick a number" << std::endl;
    std::cin >> n;
    counter = 0;
    while (n!=1){
        if (n%2==0){
            n = n/2;
        }
        else{
            n  = n*3 + 1; 
        }
        counter += 1;

    }
    std::cout << "your number took " << counter<<" turns to reach one" << std::endl;
}
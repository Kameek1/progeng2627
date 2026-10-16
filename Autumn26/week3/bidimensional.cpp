#include <iostream>

int main(){
    int n, c, c2;
    std::cin >> n;
    c = 0;
    c2 = 0;

    while(c < n){
        c += 1;
        while(c2<n){
            c2 += 1;
            std::cout << "*";
        }
        std::cout << std::endl;
        c2 = 0;
    }

}
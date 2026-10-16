#include <iostream>

int main(){
    int n;
    std::cout << "pick a number" <<std::endl;
    std::cin >> n;

    for(int i = 1; i <=n; i++){
        for(int h = 1; h <= n; h++){
            std::cout<< i*h << "\t";
        }
        std::cout << std::endl;
    }
}
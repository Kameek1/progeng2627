#include <iostream>

int smallest_factor(int n){
    for (int cf = 2; cf < n; cf ++){
        if ((n%cf)==0){
            return cf;
        }
    }
    return 0;
}

int main(){
    int a, b;
    std::cout << "please enter two numbers such that b > a > 1" << std::endl;
    std::cin >> a >> b;
    for(int i = a; i <= b; i++){
        if (smallest_factor(i) == 0){
            std::cout << i << std::endl;

        }
    }

}

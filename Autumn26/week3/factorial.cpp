#include <iostream>

int main(){
    int n,  curr;

    std::cout << "Pick a number (under like 13 please, or it will overflow)" << std::endl;
    std::cin >> n;
    curr = 1;

    for (int i = 1; i <=n; i++){
        curr = curr * i;
        std::cout << curr << std::endl;
    }
}
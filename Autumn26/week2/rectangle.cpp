#include <iostream>

int main(){
    double l, w, area;

    std::cout << "what is the length of the rectangle" << std::endl;
    std::cin >> l;
    std::cout << "what is the width of the rectangle" << std::endl;
    std::cin >> w;

    area = l*w;

    std::cout << "the area of the rectangle is "<< area;
}
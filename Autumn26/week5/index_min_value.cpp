#include <iostream>
#include <vector>

int min_value(const std::vector<double>& vin){
    
    if (vin.size() == 0){
        return -1;
    }
    int min = vin[0], index = 0;

    for (int i = 1; i < vin.size(); i++){
        if (vin[i] < min){
            index = i;
            min = vin[i];
        }

    }
    return index;
}

int main(){

    std::vector<double> v;
    v = {9, 1, 2};
    std::cout << min_value(v) << std::endl;
    v = {0, 14, 93};
    std::cout << min_value(v) << std::endl;
    v = {-9, 1, -12.5};
    std::cout << min_value(v) << std::endl;
    v = {-1.5, -9.5, 3};
    std::cout << min_value(v) << std::endl;
    v = {0, -0, 0};
    std::cout << min_value(v) << std::endl;
    v = {};
    std::cout << min_value(v) << std::endl;


}
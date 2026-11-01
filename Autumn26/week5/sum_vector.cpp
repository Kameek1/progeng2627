#include <iostream>
#include <vector>

double sum_vector(const std::vector<double>& vin){

    double sum = 0;
    for(int i = 0; i < vin.size(); i++){
        sum += vin[i];
    }
    return sum;
}

int main(){

    std::vector<double> v;
    int n, tmp;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;
    for (int i = 0; i<n; i++){
        std::cout << "enter a number" << std::endl;
        std::cin >> tmp;
        v.push_back(tmp);
    }

    std::cout << "the sum of your numbers is " << sum_vector(v) << std::endl;
}
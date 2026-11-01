#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout){
    for(int i = 0; i < vin.size(); i++){
        if (vin[i] < t){
            vout.push_back(vin[i]);
        }
    }

}

int main(){
    std::vector<double> v1{4, 6, 9, 3, 6, 1, 7, 9, -1}, v2;
    
    double t = 4;

    filter_v(v1, t, v2);

    for(int i = 0; i < v2.size(); i++){
        std::cout << v2[i] << " ";
    }

    

}
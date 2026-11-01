#include <iostream>
#include <vector>

int main(){
    int n, t, tmp;
    std::vector<int> nums;

    std::cout << "please enter a number"<< std::endl;
    std::cin>> n;
    std::cout << "please enter " << n << " numbers" << std::endl;

    for(int i = 0; i < n; i++){
        std::cin >> tmp;
        nums.push_back(tmp);
    }

    std::cout << "please enter another number" << std::endl;
    std::cin >> t;
    std::cout << "the numbers you entered smaller than " << t << " are:" << std::endl;

    for(int i = 0; i<n; i++){
        if (nums[i] < t){
            std::cout << nums[i] << " ";
        }
    }

}
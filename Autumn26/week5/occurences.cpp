 #include <iostream>
 #include <vector>

 int main(){
    int n, s, tmp, total = 0;
    std::vector<int> nums, indices;

    std::cout << "please enter a number" << std::endl;
    std::cin >> n;

    for (int i = 0; i < n; i++){
        std::cout << "please enter a number" <<std::endl;
        std::cin >> tmp;
        nums.push_back(tmp);
    }

    std::cout << "please enter s" << std::endl;
    std::cin >> s;
    
    for (int i = 0; i < n; i++){
        if(nums[i] == s){
            total +=1;
            indices.push_back(i);
        }
    }
    std::cout << "there are " << total << " occurences of " << s << " at indices:" << std::endl;
    for (int i = 0; i < total; i++){
        std::cout << indices[i] << std::endl;
    }
    
 }
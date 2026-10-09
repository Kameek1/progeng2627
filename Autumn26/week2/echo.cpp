#include <iostream>
#include <string>

int main(){
    std::string stop;

    while ((stop != "STOP")&&(stop != "Stop")&&(stop != "stop")){
        std::cout << "what is your word" << std::endl;
        std::cin >> stop;

    }
}
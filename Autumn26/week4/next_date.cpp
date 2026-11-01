#include <iostream>

bool leap_year(int year){
    bool ly;
    if (year % 4 != 0) {
        ly = false;
    } else if (year % 100 != 0) {
        ly = true;
    } else if (year % 400 != 0) {
        ly = false;
    } else {
        ly = true;
    }

    return ly;
}

void next_date(int d1, int m1, int y1, int& d2, int& m2, int& y2){
    
    d2 = d1 + 1;
    m2 = m1;
    y2 = y1;

    if (d2 == 32){
        d2 = 1;
        m2 += 1;
    }
    else if (d2 == 31){
        if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11){
            d2 = 1;
            m2 += 1;
        }
    }
    else if (d2 == 30){
        if (m1 == 2){
            d2 = 1;
            m2 += 1;
        }
    }
    else if (d2 == 29){
        if (m1 == 2 && leap_year(y1) == false){
            d2 = 1;
            m2 += 1;
        }
    }

    if (m2 == 13){
        m2 = 1;
        y2 += 1;
    
    }


}

int main(){
    int d1, m1, y1, d2, m2, y2;
    std::cout << "what is the date?" << std::endl;
    std::cin >> d1 >> m1 >> y1;

    next_date(d1, m1, y1, d2, m2, y2);

    std::cout << "tommorow is: " << d2 <<"/"<<m2<<"/"<<y2;

}
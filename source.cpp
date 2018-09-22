#include <string>
#include <iostream>

std::string crypto(const std::string &s){
    std::string total = "";
    for (auto i : s){
        total+=std::to_string(int(i<<4))+" ";
    };
    return total;
}

int main(){

    for (;;){
        std::string input;
        std::cout<<"Enter Password (or q to quit): ";
        std::cin >> input;

        if (crypto(input) == "1824 1776 1840 1616 1568 1872 1600 "){
            std::cout << "Access Granted"<<std::endl;
            return 0;
        } else if (input == "q") {
            return 0;
        } else{
            std::cout << "Access Denied"<<std::endl;
        }
    };


}




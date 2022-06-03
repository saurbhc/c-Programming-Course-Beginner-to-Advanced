#include <iostream>

int main(){
    // "Hello World!" >> std::cout; // dosen't work

    // std::cout << "please enter your firstname: " << std::endl;
    // int name; // works
    // std::cin >> std::string name; // dosen't work
    
    std::string name;
    std::cin >> name;
    std::cout << "name is: " << name << std::endl;
}

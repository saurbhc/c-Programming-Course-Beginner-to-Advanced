#include <iostream>
#include <string>

int main(){
    // printing data
    std::cout << "Hello c++20" << std::endl;

    int age{21};
    std::cout << "age is: " << age << std::endl;

    std::cerr << "error message: something is wrong!!" << std::endl;

    std::clog << "log message: something happened!!" << std::endl;

    // commenting below cond -- so it dosen't interfere with further program.
    // int age_input;
    // std::string name;

    // std::cout << "please type your name and age: " << std::endl;
    // std::cin >> name;
    // std::cin >> age_input;
    // std::cout << "Hello " << name << " you are " << age_input << " years old" << std::endl;

    // data with spaces
    std::string full_name;
    int new_age;

    std::cout << "enter full name and age: " << std::endl;
    std::getline(std::cin, full_name);
    std::cin >> new_age;
    std::cout << "your full name is: " << full_name << " and your age is: " << new_age << std::endl;

    return 0;
}
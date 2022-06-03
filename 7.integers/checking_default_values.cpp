#include <iostream>
#include <string>

int main(){
    // variable may contain some garbage value
    int var_int;
    std::string var_string;
    double var_double;
    float var_float;
    char var_char;
    bool var_bool;
    // void var_void; // error - type not allowed ? 
    // auto var_auto; // error - type not allowed ? 

    std::cout << "var_int: " << var_int << std::endl; // has some random garbage value -- example: 75956320
    std::cout << "var_string: " << var_string << std::endl; // is empty string by default.
    std::cout << "var_double: " << var_double << std::endl; // has some random garbage value -- example: 2.14188e-314
    std::cout << "var_float: " << var_float << std::endl; // has some random garbage value -- example: 1.4013e-45
    std::cout << "var_char: " << var_char << std::endl; // is empty string by default.
    std::cout << "var_bool: " << var_bool << std::endl; // is 1 by default. - true
    // std::cout << "var_void: " << var_void << std::end;
    // std::cout << "var_auto: " << var_auto << std::end;

    return 0;
}
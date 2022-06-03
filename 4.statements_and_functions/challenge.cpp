#include <iostream>

int mult_numbers(int first_num, int second_num){
    return first_num * second_num;
}

int main(){
    std::cout << "Multiplication of 12 and 2 is: " << mult_numbers(12, 2) << std::endl;

    return 0;
}
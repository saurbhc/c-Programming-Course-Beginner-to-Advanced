#include <iostream>

int sum_numbers(int first_num, int second_num){
    int sum = first_num + second_num;
    return sum;
}

int main(){

    int first_number {6}; // statement
    int second_number {4}; // statement

    int sum = first_number + second_number;
    std::cout << "Sum is: " << sum << std::endl;

    int new_sum = sum_numbers(12, 7);
    std::cout << "NewSum is: " << sum << std::endl;

    std::cout << "NewNewSum is: " << sum_numbers(40, 1) << std::endl;

    return 0;
}
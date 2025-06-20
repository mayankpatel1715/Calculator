#include<iostream>
#include<iomanip>

int main(){
    float num1, num2, add, sub, div,mul;

    std :: cout << "Enter first number: ";
    std :: cin >> num1;

    std :: cout << "Enter second number: ";
    std :: cin >> num2;

    add = num1 + num2;
    std :: cout << "Addititon of two numbers is: "<< add << std :: endl;

    sub = num1 - num2;
    std :: cout << "Subtraction of two numbers is: "<< sub << std :: endl; 

    mul = num1 * num2;
    std :: cout << "Multiplication of two numbers is: "<< mul << std :: endl;

    div = num1/num2;
    std :: cout << std :: fixed << std :: setprecision(2);
    std :: cout << "Division of two numbers is: " << div << std :: endl;
    

    return 0;
}
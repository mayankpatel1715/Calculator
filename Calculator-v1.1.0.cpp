#include<iostream>
#include<iomanip>

float inputvalidation()
    {
    float num;
    std :: cout << "Enter your number: ";
    std :: cin >> num;

    while(std :: cin.fail()){
        std :: cout << "Invalid Input!"<< std :: endl;
        std :: cin.clear();
        std :: cin.ignore(std :: numeric_limits<std :: streamsize>::max(), '\n');

        std :: cout << "Enter a valid Number: ";
        std :: cin >> num;
    }
    return num;
    }

int main(){
    float num1 = inputvalidation();
    float num2 = inputvalidation();

    while(true)
    {
        char op;
        std :: cout << "Enter your preferred operation('+','-','x','/'): ";
        std :: cin >> op;

        if(op == '+')
        {
            std :: cout << "= " << num1 + num2 << std:: endl;
        } else if(op == '-')
        {
            std :: cout << "= " << num1 - num2 << std :: endl; 
        }else if (op == 'x')
        {
            std :: cout << "= " << num1*num2 << std :: endl; 
        }else if (op == '/')
        {
            std :: cout << std :: fixed << std :: setprecision(2);
            std :: cout << "= " << num1/num2 << std :: endl;
        }else
        {
            std :: cout << "Invalid Operator!." << std :: endl;
        }
        
        std :: cin.ignore(std :: numeric_limits<std :: streamsize> :: max(), '\n' );

        std :: string con;
        std :: cout << "Do you want to continue(Y/N): ";
        std :: getline(std :: cin,con);

        if(con != "Y") break; 
        
    }

    return 0;
}
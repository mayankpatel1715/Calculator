#include<iostream>
#include<iomanip>

void menuSystem(){
    std :: cout << "----------WELCOME----------" << std :: endl;
    std :: cout << "THIS CALUCATOR IS MADE IN C++" << std :: endl;
    std :: cout << "Calculator is a machine to \nperform operations between numbers." << std:: endl;
    std :: cout << "         [+] Addition      " << std :: endl;
    std :: cout << "         [-] Subtraction   " << std :: endl;
    std :: cout << "         [x] Multiplication" << std :: endl;
    std :: cout << "         [/] Division      " << std :: endl;
    std :: cout << "         [%] Modulus       " << std :: endl;
    std :: cout << "---------------------------" << std :: endl;
}

float inputvalidation(){
    float num;
    std::cout<<"Enter your Number: ";
    std::cin>>num;

    while(std::cin.fail()){
        std:: cout << "Invalid Input!. Please enter a valid Number!";
        std :: cin.clear();
        std :: cin.ignore(std :: numeric_limits<std::streamsize>::max(),'\n');

        std :: cout << std :: endl; 

        std :: cout << "Enter your valid Number: ";
        std :: cin >> num;
    }

    return num;
}

void operationvalidation(char op){

    while(true){
        if(op == '+' || op == '-' || op == 'x' || op == '/' || op == '%'){
            break; // return op;
        }else{
            std :: cout << "Enter Valid Operation to perform" << '\n' << "[+], [-], [x], [/], [%]" << std :: endl;
            std :: cin >> op;
        }
    }
}

void addition(float num1, float num2){
    std :: cout << num1 + num2 << std :: endl;
}

void subtraction(float num1,float num2){
    std :: cout << num1 - num2 << std :: endl;
}

void division(float num1,float num2){
    
    while(num2 == 0){
        std :: cout << "Zero Division Error.";
        num2 = inputvalidation();

        if(num2 != 0) std :: cout << std :: fixed << std :: setprecision(2); std :: cout << num1/num2 << std :: endl;
    }       
}

void multiplication(float num1, float num2){
    std :: cout << num1 * num2 << std :: endl;
}

void modulus(int num1, int num2){
    std :: cout << num1%num2 << std :: endl;
}

void calculator(char op, float &num1, float &num2){
    switch(op){
        case '+':
            std :: cout << "Addition: ";
            addition(num1,num2);
            std :: cout << std :: endl; 
            break;
        case '-':
            std :: cout << "Subtraction: ";
            subtraction(num1,num2);
            std :: cout << std :: endl; 
            break;
        case 'x':
            std :: cout << "Multiplication: ";
            multiplication(num1,num2);
            std :: cout << std :: endl;
            break;
        case '/':
            std :: cout << "Division: ";
            division(num1,num2);
            std :: cout << std :: endl;
            break;
        case '%':
            std :: cout << "Modulus: ";
            modulus(num1,num2);
            std :: cout << std :: endl;
            break;
        }   
    std :: string con;
    std :: cout << "Do you want to Continue using Calculator(Y/N): ";
    std :: cin >> con;

    // if(con =="Y" || con == "y" || con =="yes" || con =="Yes" || con =="yay" || con =="Yay"){
    //     calculator(op,num1, num2);
    // }else{
    //     return;
    // }
}

int main(){
    menuSystem();
    char op;
    std :: cout << "---Enter your desired operation---" << '\n' << "[+], [-], [x], [/], [%]" << std :: endl;
    std :: cin >> op;
    operationvalidation(op);
    float num1 = inputvalidation();
    float num2 = inputvalidation();

    std :: cout << num1 << std :: endl;
    std :: cout << num2 << std :: endl;

    calculator(op,num1,num2);
    
    // bool con = false;

    // while(!con){
    //     char yes;
    //     std :: cout << "Do you want to continue using Calculator!(Y/N): ";
    //     std :: cin >> yes;
    // }


    return 0;
}
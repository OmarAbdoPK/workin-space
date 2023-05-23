#include <iostream>
#include <string>

namespace calc 
{
    std::uint16_t Sum(std::uint16_t num1, std::uint16_t num2)
    {
        return num1+num2;
    }
    int Sub(int num1, int num2)
    {
        return num1-num2;
    }
    std::uint16_t Mul(std::uint16_t num1, std::uint16_t num2)
    {
        return num1*num2;
    }
    std::uint16_t Div(std::uint16_t num1, std::uint16_t num2)
    {
        return num1/num2;
    }
    std::uint16_t Mod(std::uint16_t num1, std::uint16_t num2)
    {
        return num1%num2;
    }

}

int main()
{
    char op;
    double num1= 0,num2 = 0;

    std::cout <<"Enter The Tow Numbers : ";
    std::cin >>num1;
    std::cout <<"Enter The Tow Numbers : ";
    std::cin >>num2;
    std::cout <<"Enter The operator (+, -, *, /) Only : ";
    std::cin >>op;

    switch (op)
    {
        case '+' :
            std::cout<<calc::Sum(num1,num2)<<std::endl;
            break;
        case '-' :
            std::cout<<calc::Sub(num1,num2)<<std::endl;
            break;
        case '*' :
            std::cout<<calc::Mul(num1,num2)<<std::endl;
            break;
        case '/' :
            std::cout<<calc::Div(num1,num2)<<std::endl;
            break;
        default :
            //if the operator in not +, -, * or / type Error massage
            std::cout<<"The Operator is not Right Try again"<<std::endl;
    }
    return 0;
}
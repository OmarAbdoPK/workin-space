#include <iostream>
#include <memory>

int getValue()
{
    return 10;
}
int& getValueRef()
{
    static int value = 5;

    return value;
}

void printName(std::string & name)
{
    std::cout << "left value refrance : " << name << std::endl;
}

void printName(std::string && name)
{
    std::cout << "right value referance : " << name << std::endl;
}

int main()
{
    int i = 10;

    i = getValue();
    getValueRef() = 5;

    std::cout << i << std::endl;

    std::string firstName = "Omar";
    std::string lastName = "Abdo";
    std::string fullNAme = firstName + lastName;

    printName(fullNAme);
    printName(firstName + lastName);
    
    return 0;  
}
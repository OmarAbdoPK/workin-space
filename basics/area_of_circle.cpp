#include <iostream>
#include <string>
int main()
{
    float radius = 0;
    constexpr float PI =3.14159;
    float result;

    std::cout <<"Enter radius :"<<std::endl;
    std::cin >> radius;
    result = (radius*radius)*PI;
    std::cout <<result<<std::endl;
    return 0;
}
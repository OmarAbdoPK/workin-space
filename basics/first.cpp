#include <iostream>
int main()
{
    std::uint16_t distance = 0; // unsigned int distance
    constexpr float Miles_to_km = 1.6; // compiling time only
    float distance_kilo;

    std::cout <<"Enter distance : "<<std::endl;
    std::cin >> distance;
    distance_kilo = distance * Miles_to_km;
    std::cout <<distance_kilo<<std::endl;

    return 0;
}
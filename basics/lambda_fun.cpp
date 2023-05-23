#include <iostream>
#include <array>
#include <algorithm>

int main()
{
    std::array <int , 5> arr = {10,51,61,12,1};
    for (auto element : arr)
    {
        std::cout <<element<< " ";
    }
    std::cout << "\n";

    auto mul_lambda = [](int &index) ->void
    {
        index *= 2;
    };
    std::for_each(arr.begin(), arr.end(), mul_lambda);

    std::sort(arr.begin(), arr.end(), [](int num1,int num2)->bool
    {
        return num1 > num2;
    });

    for (auto element : arr)
    {
        std::cout <<element<< " ";
    }

    std::cout << "\n";

    std::sort(arr.begin(), arr.end(), [](int num1,int num2)->bool
    {
        return num1 < num2;
    });
    
    for (auto element : arr)
    {
        std::cout <<element<< " ";
    }

    std::cout << "\n";

    auto Hello = [](std::string name,int num) -> void
    {
        std::cout << name << " " << num <<std::endl;
    };

    Hello("Omar Abdo" , 22);
}
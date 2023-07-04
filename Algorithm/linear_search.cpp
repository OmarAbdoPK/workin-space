#include <iostream>
#include <array>

void linear(std::array <int, 6> list, int key)
{
    for (int i = 0; i < list.size(); i++)
    {
        if (key == list[i])
        {
            std::cout << "The key value founded at " << i << " index" << std::endl;
            break;
        }
    }
}

int main()
{
    std::array<int, 6> list = {3, 5, 9, 8, 1, 9};
    int key = 0;

    std::cout << "Enter the element :  ";
    std::cin >> key;

    linear(list, key);
    return 0;
}
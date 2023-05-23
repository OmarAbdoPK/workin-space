#include <iostream>

int main()
{
    int arr[] = {1,2,4,2,46,7,20,3,16,13};

    int arrSize = std::size(arr);

    for (int i = 0; i < arrSize; i++)
    {
        if (arr[i] == 7)
        {
            std::cout << arr[i] << std::endl;
            break;
        }
        else if(arr[i] == 20)
        {
            std::cout << arr[i] << std::endl;
        }
    }
    return 0;
}
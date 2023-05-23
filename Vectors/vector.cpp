#include <iostream>
#include <vector>

void inputFunc(std::vector<int> &num);
void outputFun(std::vector<int> &num);

int main()
{
    std::vector <int> arr(5,0);
    inputFunc(arr);
    outputFun(arr);
    return 0;
}

void inputFunc(std::vector<int> &num)
{
    for(auto& element : num)
    {
        std::cout << "Enter the Elements : ";
        std::cin >> element;
    }
}

void outputFun(std::vector<int> &num)
{
    std::vector <int>::iterator it;
    for (it = num.begin(); it != num.end(); ++it)
    {
        std::cout << *it << std::endl;
    }
}
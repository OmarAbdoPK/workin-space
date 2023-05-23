#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> firstList(10), secondList;

    firstList.assign({1,2,3,4});
    secondList.assign(10,20);
    secondList.assign(firstList.begin(), firstList.end());

    for (auto element : secondList)
    {
        std::cout << element << std::endl;
    }

    return 0;
}

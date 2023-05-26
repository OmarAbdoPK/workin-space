#include <iostream>
#include <forward_list>

int main()
{
    std::forward_list<int> firstList(10), secondList;

    firstList.assign({1,2,3,4,5,6,7,8,9,10});
    secondList.assign(11,20);
    secondList.assign(firstList.begin(), firstList.end());

    for (auto element : secondList)
    {
        std::cout << element << std::endl;
    }

    return 0;
}

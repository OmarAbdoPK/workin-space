#include <iostream>
#include <set>
int main()
{
    std::set<int> mySet;
    mySet.insert(15);
    mySet.insert(25);

    std::set<int>::iterator itr;

    for (itr = mySet.begin(); itr != mySet.end(); itr++)
    {
        std::cout << *itr << std::endl;
    }

    for (auto &numr : mySet)
    {
        std::cout << numr << std::endl;
    }

    std::multiset<int> mySet2 = {1, 3, 2,5,2,6,7, 4, 6, 7, 5};
    for(const auto &num : mySet2)
    {
        std::cout << num  << ", ";
    }

    return 0;
}
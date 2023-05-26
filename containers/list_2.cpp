#include <iostream>
#include <list>

int main()
{
    std::list <int> myList;

    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);

    for(auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " " << std::endl;
    }

    std::cout << std::endl;

    myList.push_front(0);

    auto it1 = myList.begin();
    ++it1;
    ++it1;
    ++it1;
    ++it1;
    myList.insert(it1, 4);

    for(auto it = myList.begin(); it != myList.end(); it++)
    {
        std::cout << *it << " " << std::endl;
    }


}
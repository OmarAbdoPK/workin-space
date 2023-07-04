// unordered map
/*
we are given an array of integer elements which contains dublicated values
the task is to clculate the frequancy of the distinct elements
present in an array that prints the result

a {1,2,3,2,1,6,8,9,8,6,4}

element : frequancy
1 : 2
2 : 2
3 : 1
4 : 1
6 : 2
8 : 2
9 : 1

*/

#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <algorithm>

void printFreq(std::vector<std::string>& arr)
{
    std::map<std::string, int> freq_map;

    std::cout << "\tElement : Frequancy" << std::endl;

    for (const auto &elem : arr) {
        freq_map[elem]++;
    }

    std::cout << "element : frequency\n";
    for (auto const& [elem, freq] : freq_map) {
        std::cout << elem << " : " << freq << "\n";
    }
}

int main()
{
    std::vector<std::string> arr{"omar", "mazen", "omar", "tarek", "mum", "omar", "alaa", "mazen"};

    printFreq(arr);
    return 0;
}
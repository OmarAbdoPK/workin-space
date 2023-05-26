#include <iostream>
#include <vector>
#include <algorithm>

struct Record
{
public:
    std::string name;
    std::uint16_t Id;
};

int main()
{
    std::vector<Record> record(2);

    // fill the first index of record vector
    record[0].name = "Omar Abd El-Aleem Ahmed";
    record[0].Id = 1;

    // fill the second index of record vector
    record[1].name = "Alaa Samir";
    record[2].Id = 2;

    auto CompareByName = [](const Record &a, const Record &b) -> bool
    {
        return a.name > b.name;
    };
    auto CompareById = [](const Record &a, const Record &b) -> bool
    {
        return a.Id > b.Id;
    };

    std::sort(record.begin(), record.end(), CompareByName);

    for (auto var : record)
    {
        std::cout << var.name << std::endl;
    }

    std::sort(record.begin(), record.end(), CompareById);

    for (auto var : record)
    {
        std::cout << var.Id << std::endl;
    }

    return 0;
}
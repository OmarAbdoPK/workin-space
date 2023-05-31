#include <iostream>
#include <memory>

class Rectangl
{
    public:
        Rectangl(int len, int wid) : length(len), width(wid)
        {}

        int area()
        {
            return length * width;
        }
    private:
    int length;
    int width;
};

int main()
{
    auto R1 = std::make_unique<Rectangl>(10, 5);
    std::cout << R1->area() << std::endl; 

    std::unique_ptr<Rectangl> p2(std::move(R1));
    std::cout << p2->area() << std::endl; 

    return 0;
}
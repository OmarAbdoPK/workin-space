#include <iostream>
#include <vector>

struct Strategy
{
    virtual void calculatedSpeed() = 0;
};

struct BMW : Strategy
{
    void calculatedSpeed()
    {
        std::cout << "BMW Cars" << std::endl;
    }
};

struct MiniCoper : Strategy
{
    void calculatedSpeed()
    {
        std::cout << "MiniCoper cars" << std::endl;
    }
};

template <typename T>
struct  Vehicel
{
    Vehicel(T *strategy) : speed(strategy)
    {}

    void vehiclSpeed()
    {
        speed->calculatedSpeed();
    }

    T* speed;
};




int main()
{
    MiniCoper mini;
    BMW bmw;

    Vehicel <Strategy> car1(&mini);
    Vehicel <Strategy> car2(&bmw);

    car1.vehiclSpeed();
    car2.vehiclSpeed();

}
#include <iostream>

class Control
{
    public:
    Control()
    {

    }

    void manualControl()
    {
        std::cout << "Manual" << std::endl;
    }

    void autoControl()
    {
        std::cout << "Auto" << std::endl;
    }

    private:

};

class Vehicle
{
    public:
    Vehicle()
    {

    }

    void Run()
    {
        std::cout << "Run" << std::endl;
    }

    void stop()
    {
        std::cout << "Stop" << std::endl;
    }

    private:
};

class Car : public Vehicle, public Control
{
    public:
        Car()
        {
            Run();
            stop();
            autoControl();
        }
        
    private:

};

class Bike : public Vehicle
{
    public:
    Bike()
    {
        stop();
    }

    private:

};

int main()
{
    Bike bike;
    bike.Run();
    Car car;
    car;

    return 0;
}
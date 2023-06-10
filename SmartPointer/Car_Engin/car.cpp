#include <iostream>
#include "car.h"
#include "v7Engine.h"
#include "v8Engine.h"

void Car::Drive()
{
    m_Engine->Start();  
}

void Car::Stop()
{
    m_Engine->Stop();
}

int main()
{
    auto engine_v7 = std::make_unique<v7Engin>();
    Car MiniCoper(std::move(engine_v7)); //Dependancy Injection
    MiniCoper.Drive();
    MiniCoper.Stop();

    Car BMW(MakeV8Engine());
    BMW.Drive();
    BMW.Stop();

    return 0;
}
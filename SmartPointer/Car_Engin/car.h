#pragma once 
#include "IEngine.h"

class Car
{
public:
    Car(std::unique_ptr<IEngine> engine) : m_Engine(std::move(engine))
    {

    }

    void Drive();
    void Stop();

private:
    std::unique_ptr<IEngine> m_Engine;
};
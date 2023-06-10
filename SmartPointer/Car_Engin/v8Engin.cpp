#include "v8Engine.h"
#include <iostream>

void V8Engine::Start()
{
    std::cout << "Start V8 Engine" << std::endl;
}

void V8Engine::Stop()
{
    std::cout << "Stop V8 Engine" << std::endl;
}

std::unique_ptr<IEngine> MakeV8Engine()
{
    return std::make_unique<V8Engine>();
}
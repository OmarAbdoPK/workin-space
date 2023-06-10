#include "IEngine.h"
#include <iostream>

class v7Engin : public IEngine
{
    public:
        void Start()
        {
            std::cout << "Start V7Engine" << std::endl;
        }

        void Stop()
        {
            std::cout << "Stop V7Engine" << std::endl;
        }
};
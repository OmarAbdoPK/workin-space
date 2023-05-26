#include <iostream>
#include <stdexcept>
#include <memory>

class Value
{
    public:
        Value(int capacity) : mCapacity(capacity)
        {
            try
            {
                p = new int[capacity];
            }
            catch(const std::exception& e)
            {
                std::cerr << "Faild to allocate memory" << e.what() << std::endl;
                throw;
            }
            
        }

        ~Value()
        {
            delete[] p;
        }

        void setValue(int fillValue)
        {
            for ( int i = 0; i < mCapacity; i++)
            {
                p[i] = fillValue;
            }
        }
    private:
        std::unique_ptr<int[]> p; // using std::unique_ptr to manage memory
        int mCapacity;
};

void useValue(int value_1)
{
    Value *value = new Value value(value_1); // heap
    value->setValue(value_1);
}
int main()
{
    
    for (int i = 1; i < 10; i++)
    {
        useValue(i);
    }
    return 0;
}
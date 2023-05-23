#include <iostream>

class Value
{
    public:
        Value(int capcity) : memoryCapcity(capcity)
        {
            p = new int[capcity];
        }

        void setValue(int capacity)
        {
            for (int i = 0; i < memoryCapcity; i++)
            {
                p[i] = capacity;
            }
        }

        void getValue(int pValue)
        {
            
            for (int i = 0; i < memoryCapcity; i++)
            {
                std::cout << " Vlaue number - " << p[i] << std::endl;
            }    
        }

        ~Value ()
        {
            delete [] p;
        }

    private:
        int *p;
        int memoryCapcity;
};

void useValue(int setValue)
{
    Value value(setValue);
    value.setValue(setValue);
    value.getValue(setValue);
}


int main()
{
    for (int i = 0; i < 11; i++)
    {
        useValue(i);
    }
    return 0;
}
#include <iostream>
#include <memory>
template <typename T>
class CountedPtr
{
    public:
        //Prametarized Constructor
        CountedPtr(T * p) : ptr(p)
        {
            count = new long {1};
        }

        //Copy Constructor
        CountedPtr(const CountedPtr& other)
        {
            this->ptr = other.ptr;
            this->count = other.count;
            (*count)++;
        }

        //Destructor
        ~CountedPtr()
        {
            (*count)--;
            if (count == 0)
            {
                delete ptr;
                delete count;
            }
        }

        //Dereferance
        T& operator*()
        {
            return *ptr;
        }
        T& operator->()
        {
            return ptr;
        }

    T *ptr;
    long * count;
};

int main()
{
    CountedPtr<int> S1(new int(5));
    CountedPtr<int> S2(S1);
    int value = 1998;
    auto firstShr = std::make_shared<int>(value);
    auto secShar = firstShr;

    std::cout << *S2 << std::endl;
    std::cout << *firstShr << std::endl;
    // std::cout << "number : " << S1.use_count() << std::endl;
    // std::cout << "number : " << S2.use_count() << std::endl;
    std::cout << "number : " << firstShr.use_count() << std::endl;
    std::cout << "number : " << secShar.use_count() << std::endl;

    return 0;
}
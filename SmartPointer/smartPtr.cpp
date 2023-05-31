#include <iostream>


namespace mystd{
    //template for the smart pointer class 
    template<class T>
    class smartPtr
    {
        public:
            
            //Constructor of the smartptr
            //explicit keyword is used to prevent implicit conversions of constructor 
            /*
            the explicit provides an implicit conversion from a raw pointer to a smartPtr object, 
            and it ensures that the dynamically allocated memory is deleted 
            when the smartPtr object goes out of scope or is destroyed.
            */
            explicit smartPtr(T *p = NULL)
            {
                ptr = p;
            }

            //Destructor
            ~smartPtr()
            {
                delete(ptr);
            }

            //overloding for the dereferance operator
            int& operator*()
            {
                return *ptr;
            }
        private:
        T *ptr;
    };
}

int main()
{
    mystd::smartPtr<int> smart (new int(20));
    std::cout << *smart << std::endl;
    return 0;
}
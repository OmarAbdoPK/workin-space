#include <iostream>
#include <cassert>
using namespace std;

template <typename T>
class arrayQueue
{
    private:
        int begin;
        int end;
        int length;
        T *arr;
        int MAX_SIZE;
    
    public:
        arrayQueue(T sizeArr)
        {
            if(sizeArr <= 0)
            {
                sizeArr = 100;
            }
            else{
                MAX_SIZE = sizeArr;
            }
            arr = new T[MAX_SIZE];
            begin = 0;
            end = MAX_SIZE - 1;
            length = 0;
        }
        bool Empty()
        {
            return length == 0 ? true : false;
        }
        bool Full()
        {
            return length == MAX_SIZE;
        }

        void addQueue(int value)
        {
            if(Full())
            {
                cout << "Queue is Full can not push elements...!" << std::endl;
            }
            else
            {
                end = (end + 1) % MAX_SIZE;
                arr[end] = value;
                length++;
            }
        }
        void deQueue()
        {
            if(Empty())
            {
                std::cout << "Queue is Empty Can not Delete Elements...!" << std::endl;
            }
            else
            {
                begin = (begin+1) % MAX_SIZE;
                length--;
            }
        }

        int beginQueue()
        {
            assert(!Empty());
            return arr[begin];
        }
        int endQueue()
        {
            assert(!Empty());
            return arr[end];
        }

        void print()
        {
            if(!Empty())
            {
            cout << "[ ";
            for(size_t i = begin; i != end; i = (i + 1)%MAX_SIZE)
            {
                cout << arr[i] << ", ";
            }
            cout << arr[end];
            cout << " ]";
            }
            else{
                cout << "Queue is Empty";
            }
        }

        int Search(T key)
        {
            int pos = -1;
            if(!Empty())
            {
                for(size_t i = 0; i != end; i = (i + 1) % MAX_SIZE)
                {
                    if(arr[i] == key)
                    {
                        pos = i;
                        break;
                    }
                    if(pos == -1)
                    {
                        if(arr[end] == key)
                        {
                            pos = end;
                        }
                    }
                }
            }
            else{
                cout << "Queue is empty";
            }
            return pos;
        }
        ~arrayQueue()
        {
            delete [] arr;
        }
};

int main()
{
    arrayQueue<int> list(5);
    list.addQueue(10);
    list.addQueue(20);
    list.addQueue(30);
    list.addQueue(40);
    list.addQueue(50);
    
    list.print();
    

    return 0;
}
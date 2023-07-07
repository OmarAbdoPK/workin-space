#include <iostream>

const int MAX_SIZE = 100;
template <typename T>
class Stack
{
private:
    int top;
    T item[MAX_SIZE];

public:
    //Constructor
    Stack() : top(-1)
    {
    }

    //pushing the element
    void push(T element)
    {
        if (top >= MAX_SIZE)
        {
            std::cout << "stack is full";
        }
        else
        {
            top++;
            item[top] = element;
        }
    }

    bool is_empty()
    {
        return top < 0;
    }
    void pop()
    {
        if (!is_empty())
        {
            top--;
        }
        else
            std::cout << "Stack is Empty pop";
    }

    void pop(T &Element)
    {
        if (is_empty())
        {
            Element = item[top];
            top--;
        }
        else
            std::cout << "Stack is Empty at pop save";
    }

    void getTop(T &stackTop)
    {
        if (is_empty())
        {
            stackTop = item[top];
            std::cout << stackTop;
        }
        else
            std::cout << "Stack is Empty at getTop";
    }

    void print()
    {
        std::cout << "[ ";
        for (auto i = top; i >= 0; i--)
        {
            std::cout << item[i] << ", ";
        }
        std::cout << "]";
        std::cout << std::endl;
    }
};

int main()
{
    Stack<int> arr;
    arr.push(20);
    arr.push(50);
    arr.push(12);
    arr.push(1);
    arr.push(3);
    arr.push(16);

    arr.print();

    Stack<std::string> string;
    string.push("Omar");
    string.push("Tarek");
    string.push("Ammat");
    string.push("Alaa");

    string.print();

    return 0;
}
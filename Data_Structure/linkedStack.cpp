#include <iostream>

template <typename T>
class Stack
{
private:
    struct Node
    {
        T item;
        Node *next;
    };
    Node *top, *current;

public:
    Stack() : top(NULL)
    {
    }
    void push(T value)
    {
        Node *newItem = new Node;
        if (newItem == NULL)
        {
            std::cout << "Stack push cannot allocate momory";
        }
        else
        {
            newItem->item = value;
            newItem->next = top;
            top = newItem;
        }
    }

    bool Empty()
    {
        return top == NULL;
    }

    void pop()
    {
        if (Empty())
        {
            std::cout << "Stack is Empty on pop";
        }

        else
        {
            Node *temp = top;
            top = top->next;

            temp->next = NULL;
            delete temp;
        }
    }

    void pop(T &stackTop)
    {
        if (Empty())
        {
            std::cout << "Stack is Empty on pop";
        }

        else
        {
            stackTop = top->item;
            Node *temp = top;
            top = top->next;

            temp->next = NULL;
            delete temp;
        }
    }

    void getTop(T &topItem)
    {
        if (Empty())
        {
            std::cout << "Stack is Empty on pop";
        }

        else
        {
            topItem = top->item;
            std::cout << topItem;
        }
    }

    void Display()
    {
        current = top;
        std::cout << "\nItems in the Stack : ";
        std::cout << "[ ";
        while (current != NULL)
        {
            std::cout << current->item;
            current = current->next;
            std::cout << ", ";
        }
        std::cout << "]\n";
    }
};

int main()
{
    Stack<int> list;

    list.push(1);
    list.push(2);
    list.push(5);
    list.push(10);
    list.push(20);
    list.push(60);
    list.pop();
    list.push(3);

    list.Display();

    int top = 0;
    std::cout << "the top item is : ";
    list.getTop(top);

    return 0;
}
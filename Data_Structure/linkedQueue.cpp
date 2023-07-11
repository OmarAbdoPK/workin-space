#include <iostream>
#include <cassert>

template <typename T>
class linkedQueue
{
private:
    struct Node
    {
        T item;
        Node *next;
    };
    Node *frontPtr;
    Node *rearPtr;
    int length;

public:
    linkedQueue()
    {
        frontPtr = rearPtr = NULL;
        length = 0;
    }

    bool isEmpty()
    {
        return length == 0;
    }
    void enQueue(T value)
    {
        if (isEmpty())
        {
            frontPtr = new Node;
            frontPtr->item = value;
            frontPtr->next = NULL;
            rearPtr = frontPtr;
            length++;
        }
        else
        {
            Node *newPtr = new Node;
            newPtr->item = value;
            newPtr->next = NULL;
            rearPtr->next = newPtr;
            rearPtr = newPtr;
            length++;
        }
        //Another Method
        /*
        Node* newptr = new Node;
        newptr->item = value;
        newptr->next = NULL;

        if(length == 0)
        {
            rearPtr = frontPtr = newptr;
        }
        else
        {
            rearPtr->next = newptr;
            rearPtr = newptr;
        }
        length++;
        */
    }

    void deQueue()
    {
        if (isEmpty())
        {
            std::cout << "Queue is Empty can not dequeue";
        }
        else
        {
            Node *tempPtr = frontPtr;
            if (frontPtr == rearPtr)
            {
                frontPtr = NULL;
                rearPtr = NULL;
                length = 0;
            }
            else
            {
                frontPtr = frontPtr->next;
                tempPtr->next = NULL;
                length--;
                delete tempPtr;
            }
        }
    }

    int getFront()
    {
        // return isEmpty() == 1 ? std::cout << "Empty Queue" : frontPtr->item;
        assert(!isEmpty());
        return frontPtr->item;
    }

    int getRear()
    {
        // return isEmpty() == 1 ? std::cout << "Empty Queue" : rearPtr->item;
        assert(!isEmpty());
        return rearPtr->item;
    }

    void clearQueue()
    {
        Node *current;
        while (frontPtr != NULL)
        {
            current = frontPtr;
            frontPtr = frontPtr->next;
            delete current;
        }
        rearPtr = NULL;
        length = 0;
    }

    void printQueue()
    {
        Node *move = frontPtr;
        std::cout << "Items in the Queue : [ ";
        while (move != NULL)
        {
            std::cout << move->item << ", ";
            move = move->next;
        }
        std::cout << "]";
    }

    int getSize()
    {
        return length;
    }

    void search(T item)
    {
        Node *cur = frontPtr;
        bool flag = true;
        while (cur != NULL)
        {
            if (cur->item == item)
            {
                cout << "the item :" << item << " found" << endl;
                flag = false;
                break;
            }
            cur = cur->next;
        }
        if (flag)
            cout << "the item : " << item << " not found" << endl;
    }
};

int main()
{
    linkedQueue<int> q1;
    linkedQueue<std::string> q2;
    q1.enQueue(10);
    q1.enQueue(20);
    q1.enQueue(30);
    q1.enQueue(40);
    q1.enQueue(50);
    q1.enQueue(60);
    q1.deQueue();
    q2.enQueue("Omar Abdo");
    q2.enQueue("Alaa Samir");
    q2.enQueue("Tarek Amr");
    q2.enQueue("Ammar Mohammed");

    q1.printQueue();
    std::cout << "\nItems Number is : " << q1.getSize() << std::endl;

    q2.printQueue();
    std::cout << "\nItems Number is : " << q2.getSize() << std::endl;
    return 0;
}
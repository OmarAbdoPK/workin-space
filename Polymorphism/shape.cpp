#include <iostream>

class Shape
{
    public:
        virtual void show() = 0; // pure virsual function

        virtual ~Shape() = default;
};

class Circle : public Shape
{
    public:
        void show()
        {
            std::cout << "Circle" << std::endl;
        }

        virtual void displayCircleShape()
        {
            show();
        }

};

class Elips : public Circle
{
    public:
        void show()
        {
            std::cout << "Elips" << std::endl;
        }

        virtual void displayCircleShape()
        {
            show();
        }
    
};

int main()
{
    Shape *shape;
    Circle circle;
    shape = &circle;

    shape->show();
}
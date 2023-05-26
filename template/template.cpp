#include <iostream>
#include <string>

template <typename S>
void swap(S& first, S& second)
{
    S temp = first;
    first = second;
    second = temp;
}

template <class T>
T& max_function(T& first, T& second)
{
    return first > second ? first : second;
}

class Person 
{
    public:
        Person(const std::string& name, std::uint16_t age) : Name(name), Age(age)
        {}

        Person(const Person& personCopy)
        {
            this->Name = personCopy.Name;
            this->Age = personCopy.Age;
        }

        Person& operator=(const Person& rhs)
        {
            this->Name = rhs.Name;
            this->Age = rhs.Age;
            return *this;
        }

        bool operator>(const Person& rhs) const
        {
            return this->Age > rhs.Age;
        }

        std::string getName() const
        {
            return this->Name;
        }

        std::uint16_t getAge() const
        {
            return this->Age;
        }

    private:
        std::string Name;
        std::uint16_t Age;
};

int main()
{
    Person p1("Ahmed", 21);
    Person p2("Mazen", 23);

    swap(p1, p2);
    auto& max_person = max_function(p1, p2);

    std::cout << p1.getName() << " " << p2.getName() << std::endl;
    std::cout << max_person.getName() << " " << max_person.getAge() << std::endl;

    return 0;
}
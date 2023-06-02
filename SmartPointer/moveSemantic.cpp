#include <iostream>
#include <string.h>

class String
{
    public:
    //parametarized Constructor for creation
    String(const char* string)
    {
        printf("Created\n");
        mSize = strlen(string);
        m_date = new char[mSize];
        memcpy(m_date,string,mSize);
    }

    //Copy Constructor
    String(const String& other) noexcept
    {
        printf("Copied\n");
        mSize = other.mSize;
        m_date = new char[mSize];
        memcpy(m_date, other.m_date, mSize);
    }

    //move constructor
    String(String&& other)
    {
        printf("Moved\n");
        mSize = other.mSize;
        m_date = other.m_date;

        other.mSize = 0;
        other.m_date = nullptr;
    }

    ~String()
    {
        printf("Destroyed\n");
        delete m_date;
    }

    void print()
    {
        for(std::uint32_t i = 0; i < mSize; i++)
        {
            printf("%c", m_date[i]);
        }
        printf("\n");
    }
    private:
    std::uint32_t mSize;
    char *m_date;
};

class Entity
{
    public:
    Entity(const String& name) : mName(name)
    {}

    Entity(const String&& name) : mName((String&&)name) // this equals std::move(name)
    {}

    void printName()
    {
        mName.print();
    }

    private:
    String mName;
};

int main()
{
    Entity name("Omar");
    name.printName();

    return 0;
}
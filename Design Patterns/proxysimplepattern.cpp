/*
Task:
    create a Box class and restrict the access through Authentication
*/

#include <iostream>

class Ibox
{
    public:
        virtual void Open() = 0;
        virtual ~Ibox() {}
};

class SimpleBox : public Ibox
{
    public:
        void Open() override
        {
            std::cout << "Ready to open" << std::endl;
        }
};

class ProxyBox : public Ibox
{
    public:
        ProxyBox(std::string name, std::string password) : m_UserName(name), m_Password(password)
        {}

        void Open() override
        {
            if(authenticate ())
            {
                std::cout << "Success" << std::endl;
                m_Box.Open();
                std::cout << "Open the Box" << std::endl;
            }
            else 
                std::cout << "Box Can't be opened" << std::endl;
        }

        bool authenticate ()
        {
            bool permission = false;
            if(m_UserName == "Omar Abdo" && m_Password == "12345678")
            {
                permission = true;
            }
            
            return permission;
        }


    private:
    std::string m_UserName;
    std::string m_Password;
    SimpleBox m_Box;
};

int main()
{
    ProxyBox open("Omar Abdo", "12345678");

    open.Open();

    return 0;
}
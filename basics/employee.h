#ifndef EMPLOYEE
#define EMPLOYEE
#include <iostream>
#include <string>

class Employee{
    public :
        Employee(std::string f_Name, std::string l_Name, int mAge, std::string member_Id, int budged, bool mHired) : 
        fName(f_Name), lName(l_Name), age(mAge), mID(member_Id),salary(budged), memberHired(mHired)
        {
        }
        // Methods
        // set and Getters
        void setFrstName(std::string f_name)
        {
            fName = f_name;
        }
        void setLastName(std::string l_name)
        {
            lName = l_name;
        }
        void setSlary(int budged)
        {
            salary = budged;
        }

        void Display() const
        {
            std::cout << "Name : " << fName + lName << "\nAge : " << age <<std::endl;
            std::cout << "Id : " << mID <<std::endl;
            std::cout << "salary : " << salary <<std::endl;
            std::cout << "member Hired" << memberHired << std::endl;
        }
    private:
        std::string fName;
        std::string lName;
        std::string mID;
        int salary;
        bool memberHired;
        int age;
};
#endif //end EMPLOYEE
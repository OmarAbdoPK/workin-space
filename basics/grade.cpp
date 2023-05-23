#include<iostream>
#include<string>

namespace Evaluation
{
    
    std::string grade(std::uint16_t grade)
    {
        std::string Evaluation = "";

        if(grade >50 && grade <65)
            Evaluation = "Passed";
        else if(grade >65 && grade <75)
            Evaluation = "Good";
        else if(grade >75 && grade <85)
            Evaluation = "Very-Good";
        else if(grade >85 && grade <=100)
            Evaluation = "Excellent";
        else
            Evaluation = "Failed";
        
        return Evaluation;
    }
}
int main()
{
    std::uint16_t grade;
    std::string Evaluation("");

    std::cout << "Enter Your Grade : ";
    std::cin >> grade;
  
    std::cout << "Your Evaluation is : " << Evaluation::grade(grade) << std::endl;
}
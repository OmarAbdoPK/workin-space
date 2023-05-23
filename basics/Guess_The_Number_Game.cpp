#include <iostream>
#include <array>
// using namespace std;

int main()
{
    int answer[3];
    std:: cout<<"Guess the first number : "<<std::endl;
    std:: cout<<"1 | 5 | 10 | 16 | ?? "<<std::endl;
    std:: cin>>answer[0];

    std:: cout<<"Guess the second number : "<<std::endl;
    std:: cout<<"2 | 4 | 8 | 16 | ?? "<<std::endl;
    std:: cin>>answer[1];

    std:: cout<<"Guess the third number : "<<std::endl;
    std:: cout<<"1 | 1 | 2 | 3 | ?? "<<std::endl;
    std:: cin>>answer[2];

    int arr[3][5] = {
        {1,5,10,16,23},
        {2,4,8,16,32},
        {1,1,2,3,5},
    };
    int points = 0;
    if (answer[0] == arr[0][4])
    {
        std:: cout<<"The First number is correct"<<std::endl;
        points = 100;
    }
    else
    {
        std:: cout<<"The First Answer is Wrong"<<std::endl;
        points = 0;
    }
    if (answer[1] == arr[1][4])
    {
        std:: cout<<"The Second number is correct"<<std::endl;
        points = points + 100;
    }
    else
    {
        std:: cout<<"The Second Answer is Wrong"<<std::endl;
        points = points + 0;
    }
    if (answer[2] == arr[2][4])
    {
        std:: cout<<"The Third number is correct"<<std::endl;
        points = points + 100;
    }
    else
    {
        std:: cout<<"The Third Answer is Wrong"<<std::endl;
        points = points + 0;
    }
    std:: cout<<"your Score is "<<points<<std::endl;

}
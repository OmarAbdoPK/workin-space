#include <iostream>
#include <string>
enum week 
    {
        Monday = 1,
        Tuesday,
        Wednesday,
        Thursday,
        Friday,
        Saturday,
        Sunday,
        Max_Weekdays = 7
    };
int main()
{
    std::uint16_t DAY_OF_CURRENT_WEEK;
    std::cout<< "Enter The Current Day : " << std::endl;
    std::cin >> DAY_OF_CURRENT_WEEK;
    std::uint16_t days_after_ten_days = (DAY_OF_CURRENT_WEEK + 10) % Max_Weekdays;
    std::string day;

    switch (days_after_ten_days)
    {
        case Sunday :
            day = "Sunday";
            break;
        case Monday :
            day = "Monday";
            break;
        case Tuesday :
            day = "Tuesday";
            break;
        case Wednesday :
            day = "Wednesday";
            break;
        case Thursday :
            day = "Thursday";
            break;
        case Friday :
            day = "Friday";
            break;
        case Saturday :
            day = "Saturday";
            break;
        default:
            day = "";
            std::cout << "Invalid day" << std::endl;
            break;
    }
    std::cout << day << std::endl;
}
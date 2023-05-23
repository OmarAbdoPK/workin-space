#include <iostream>
#include <string>

struct Distance
{
    float inch;
    float feet;
};


int main()
{
    //initialize the student
    Distance d1, d2, sum;
    
    std::cout << "Enter first distance in inch : ";
    std::cin >> d1.inch;
    
    std::cout << "Enter second distance in inch : ";
    std::cin >> d2.inch;
    
    std::cout << "Enter first distance in feet : ";
    std::cin >> d1.feet;
    
    std::cout << "Enter second distance in feet : ";
    std::cin >> d2.feet;

    sum.inch = d1.inch + d2.inch;
    sum.feet = d1.feet + d2.feet;

    if(sum.inch > 12)
    {
        float extra = sum.inch / 12;

        sum.feet += extra;
        sum.inch -= (extra * 12);
    }

    std::cout << "Sum of the first and the second distance in inch is : " << sum.inch << std::endl;
    std::cout << "Sum of the first and the second distance in feet is : " << sum.feet << std::endl;

    return 0;

}
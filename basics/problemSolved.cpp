#include <iostream>
#include <string>
#include <vector>

double calcAverage(const std::vector<int>& values){
  // your code
  double count = values.size();
  double nums = 0;
  
  for (int i = 0; i < count; i++)
  {
    nums = nums + values[i];
  }

  double avg = nums / count;

  return avg;
}

int main() 
{
    std::vector<int> values ={1,3,4,5,8};

    double avg = calcAverage(values);

    std::cout << "avg of list is : " << avg << std::endl;

    return 0;
}
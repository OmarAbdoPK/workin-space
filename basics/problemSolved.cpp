#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
  double num;
  cin >> num;

  int year = 365, month = 30, day = 1;
  int sameNum = num;
  int countYear = 0, countMonth = 0, countDay = 0;
  for (size_t i = 1; i < num; i++)
  {
    if (i >= year && )
    {
      countYear++;
    }
    else if (i >= month)
    {
      countMonth++;
    }
    else if (i <= day)
    {
      countDay++;
    }
  }

  cout << countYear << "years" << endl;
  cout << countMonth << "months" << endl;
  cout << countDay << "days" << endl;

  return 0;
}
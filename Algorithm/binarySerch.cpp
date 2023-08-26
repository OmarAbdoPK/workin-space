#include <iostream>

// int binarySerch(int arr[], int left, int right, int key)
// {
//   int middel = (left + right) / 2;
//   while (left <= right)
//   {
//     if (arr[middel] == key)
//     {
//       return middel;
//     }
//     if (key <= arr[middel])
//     {
//       right = middel - 1;
//       middel = (left + right) / 2;
//     }
//     else
//     {
//       left = middel + 1;
//       middel = (left + right) / 2;
//     }
//   }
//   return -1;
// }

int binarySerch(int arr[],int left, int right, int key)
{

    if (left <= right)
    {
      int middel = (left + right) / 2;
      if (arr[middel] == key)
        return middel;
      if (key < arr[middel])
        return binarySerch(arr, left, middel - 1, key);
      return binarySerch(arr, middel + 1, right, key);
    }

  return -1;
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 20, 30, 40};
  int size = sizeof(arr) / sizeof(arr[0]);
  int desired;
  std::cin >> desired;

  int result = binarySerch(arr, 0, size - 1, desired);
  if (result == -1)
  {
    std::cout << "Key is not found" << std::endl;
  }
  else
  {
    std::cout << "The Key (" << arr[result] << ")"
              << " is found in (" << result << ")" << std::endl;
  }
  return 0;
}
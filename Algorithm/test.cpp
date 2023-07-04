#include <iostream>
#include <vector>
#include <array>

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void bubbleSort(int arr[], int size)
{
    bool flag = true;
    int count = 0;
    for(int i = 0; i < size-1; i++)
    {
        for(int j = 0; j < size-i-1; j++)
        {
            if(arr[j] < arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = false;
            }
            count++;
        }
        if(flag == true)
        {
            break;
        }
    }

    std::cout << count << " \n";
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1, 5, 2, -5, 20, -3, 40};
    int sizeArr = sizeof(arr) / sizeof(arr[0]);

    std::array<int, 7> array = {1, 5, 2, -5, 20, -3, 40};

    bubbleSort(arr, sizeArr);
    printArray(arr, sizeArr);
}
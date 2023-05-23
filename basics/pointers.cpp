#include <iostream>

int getMin(int arr[], int size)
{
    int  Min = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] < Min)
        {
            Min = arr[i];
        }
    }
    return Min;
}
int getMax(int arr[], int size)
{
    int  Max = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > Max)
        {
            Max = arr[i];
        }
    }
    return Max;
}

void getMinMax(int arr[], int size,int *Max,int *Min)
{
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < *Min)
        {
            *Min = arr[i];
        }

        if (arr[i] > *Max)
        {
            *Max = arr[i];
        }
    }
}

int main()
{
    int arr[] = { 1,2,3,5,6,4,-5, 50, -7 };
    int arrSize = std::size(arr);
    std::cout << "Minimum number is : " << getMin(arr, arrSize) << std::endl;
    std::cout << "Maximum number is : " << getMax(arr, arrSize) << std::endl;

    int min = arr[0];
    int max = arr[0];
    getMinMax(arr, arrSize, &max, &min);
    std::cout << "Maximum and Minimum numbers are : " << max << " " << min << std::endl;

    return 0;
}
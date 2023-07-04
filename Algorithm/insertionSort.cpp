#include <iostream>

void insertionSort(int arr[], int size)
{
    int key, j;

    for(int i = 1; i < size; i++) //{1, 5, 2, -5, 20, -3, 40};
    {
        key = arr[i]; 
        j = i - 1; 
        while(j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key; 
    }
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

    insertionSort(arr, sizeArr);
    printArray(arr, sizeArr);

    return 0;
}
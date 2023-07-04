#include <iostream>
#include <array>

void swap(int *one, int *two)
{
    int temp = *one;
    *one = *two;
    *two = temp;
}

void selectionSort(int arr[], int size)
{
    int inner_idx, outer_idx, min_idx;

    for (outer_idx = 0; outer_idx < size - 1; outer_idx++)
    {
        min_idx = outer_idx;
        for(inner_idx = outer_idx + 1; inner_idx < size; inner_idx++)
        {
            if(arr[inner_idx] < arr[min_idx])
            {
                min_idx = inner_idx;
            }
        }

        swap(&arr[min_idx], &arr[outer_idx]);
    }
}

void print(int arr[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << std::endl;
    }
}

int main()
{
    int arr[] = {1, 5, 6, 2, 3, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    selectionSort(arr, size);
    print(arr, size);
    return 0;
}
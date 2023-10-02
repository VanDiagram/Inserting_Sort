#include <iostream>
const int SIZE = 8;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool swapped = false;
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                std::swap(arr[j], arr[j + 1]);
            }
        }
        if (!swapped)
            break;
        ;
    }
}

void display(int arr[], int size)
{
    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
    {
        std::cout << " " << arr[i];
    }
    std::cout << std::endl;
}

int binarySearch(int arr[], int left, int right, int value)
{
    while (left <= right)
    {
        int i = left + (right - left) / 2;

        if (arr[i] == value)
            return i;

        else if (arr[i] < value)
            left = i + 1;

        else
            right = i - 1;
    }

    return -1;
}

int main(void)
{
    int arr[SIZE] = {32, 54, 64, 12, 23, 13, 53, 75};
    int N = sizeof(arr) / sizeof(arr[0]);
    int value;

    bubbleSort(arr, N);
    display(arr, N);

    std::cout << "Please enter number you want to find: ";
    std::cin >> value;

    int result = binarySearch(arr, 0, N - 1, value);
    (result == -1)
        ? std::cout << "No value found"
        : std::cout << "The value found in the position of " << (result + 1);

    return 0;
}
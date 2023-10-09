#include <iostream>

void InsertionSort(int arr[], int n)
{
    int j, key;
    for(int i = 0; i < n; i++)
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

void display(int arr[], int size)
{
    std::cout << "Sorted array: ";
    for(int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int BinarySearch(int arr[], int l, int r, int value)
{
    int m;
    while(l <= r)
    {
        m = l + (r - l) / 2;

        if(arr[m] == value)
        {
            return m;
        }

        else if(arr[m] < value)
        {
            r = m - 1;
        }

        else
        {
            l = m + 1;
        }
    }
    return - 1;
}

void give_value(int &value)
{
    std::cout << "Please enter your value: ";
    std::cin >> value;
}

void returnValue(int result, int &value)
{
    if(result == -1)
    {
        std::cout << " Cannot find the value in array";
    }
    else
    {
        std::cout << "The value " << value << " at index: " << (result + 1) << std::endl; 
    }

}

int main(void)
{

    int arr[] = {23, 12, 5, 7, 15, 19};
    int n = sizeof(arr) / sizeof(arr[0]);
    int value;

    InsertionSort(arr, n);
    display(arr, n);

    give_value(value);
    

    int result = BinarySearch(arr, 0, n - 1, value);
    returnValue(result, value);

    return 0;
}
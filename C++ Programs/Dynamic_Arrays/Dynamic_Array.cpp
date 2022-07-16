#include <iostream>
#include <algorithm>
using namespace std;

int len, capacity = 0;

void disp(int arr[])
{
    cout << "Current Array : [";
    for (int i = 0; i < capacity; i++)
    {
        if (i < capacity-1)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << "]";
    }
}

void sort(int arr[])
{
    sort(arr, arr + capacity);
}

int main()
{
    cout << "Enter number of elements : ";
    cin >> capacity;
    int *arr = new int(capacity);

    cout << "Enter the elements : ";
    for (int i = 0; i < capacity; i++)
    {
        cin >> arr[i];
    }
    
    sort(arr);
    disp(arr);

    delete []arr;
    return 0;
}
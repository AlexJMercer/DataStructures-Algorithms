#include <iostream>
using namespace std;

void showArray(int arr[], int len)
{
    cout << "Resulting array : [";
    for (int i = 0; i < len; i++)
    {
        if (i < len-1)
            cout << arr[i] << ", ";
        else
            cout << arr[i] << "]";
    }
}

int main()
{
    int len, temp=0;
    cout << "Enter size of array : ";
    cin >> len;
    int* arr = new int[len];
    cout << "Enter array elements : ";
    
    for (int i = 0; i < len; i++)
    {
        cin >> temp;
        arr[i] = temp;
    }

    showArray(arr, len);
    
    return 0;
}
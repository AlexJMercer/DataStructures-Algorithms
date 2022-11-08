#include <iostream>
#include <vector>
using namespace std;

void disp(vector<int> arr)
{
    cout << "Sorted Array : ";
    for (int i = 0; i < arr.size(); i++)
    {
        if (i < (arr.size() - 1))
            cout << arr[i] << ", ";
        else
            cout << arr[i];
    }
}

void selection_sort(vector<int> arr)
{
    int temp;
    for (int i = 0; i < arr.size()-1; i++)
    {
        int min = i;
        for (int j = i+1; j < arr.size(); j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
    }
    disp(arr);
}

int main()
{   
    int size, data;
    vector<int> list;
    cout << "Enter size of the list : ";
    cin >> size;
    cout << "Enter elements for the list (Unordered) : ";
    for (int i = 0; i < size; i++)
    {
        cin >> data;
        list.push_back(data);
    }
    cout << "The sorted list is :" << endl;
    selection_sort(list);
    return 0;
}
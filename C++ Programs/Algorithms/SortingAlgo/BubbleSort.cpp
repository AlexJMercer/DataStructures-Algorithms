#include <iostream>
#include <vector>
using namespace std;

void bubble_sort (vector<int> list)
{
    int temp;
    for (int i = 1; i < list.size() - 1; i++)
    {
        for (int j = 0; j < list.size() - i; j++)
        {
            if (list[j] > list[j+1])
            {
                temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < list.size(); i++)
    {
        if (i < (list.size() - 1))
        cout << list[i] << ", ";
        else
        cout << list[i];
    }
    
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
    bubble_sort(list);
    return 0;
}
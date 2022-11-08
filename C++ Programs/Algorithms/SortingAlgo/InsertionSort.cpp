#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> list)
{
    for (int i = 1; i < list.size(); i++)
    {
        int index = list[i];
        int j = i;
        while (j > 0 && list[j-1] > index)
        {
            list[j] = list[j-1];
            j--;
        }
        list[j] = index;
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
    insertion_sort(list);

    return 0;
}
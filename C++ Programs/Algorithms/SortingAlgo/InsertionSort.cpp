#include <iostream>
#include <vector>
using namespace std;

void insertion_sort(vector<int> list)
{
    int i = 1, m;
    for (int j = 1; j < list.size(); j++)
    {
        i = 0;
        while (list[j] > list[i])
            i++;
        m = list[j];
        for (int k = 0; k < (j - i); k++)
            list[j-k] = list[j-k-1];
        
        list[i] = m;
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
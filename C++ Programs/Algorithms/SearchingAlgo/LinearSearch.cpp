#include <iostream>
#include <vector>
using namespace std;

int linear_search(vector<int> list, int x)
{
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i] == x)
            return i;
        else
            continue;
    }
    return -1;
}

int main()
{
    int size, ele, data = 0, pos;
    vector<int> list;
    cout << "Enter size of the list : ";
    cin >> size;
    cout << "Enter elements for the list : ";
    for (int i = 0; i < size; i++)
    {
        cin >> data;
        list.push_back(data);
    }
    cout << "Enter element to search in the list : ";
    cin >> ele;
    pos = linear_search(list, ele);
    if (pos >= 0)
        cout << "Element found at position " << pos+1;
    else
        cout << "Element does not exist in the list.";
    
    return 0;
}
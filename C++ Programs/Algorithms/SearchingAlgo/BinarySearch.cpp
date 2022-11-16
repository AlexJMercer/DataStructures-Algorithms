#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int binary_search(vector<int> list, int x)
{
    int i = list[0], j = list[list.size() - 1];
    while (i < j)
    {
        int mid = floor((i + j)/2);
        if (x == mid)
            return mid;
        if (x > mid)
            i = mid + 1;
        else
            j = mid;
    }
    return -1;
}

int main()
{
    int size, ele, data = 0, pos;
    vector<int> list;
    cout << "Enter size of the list : ";
    cin >> size;
    cout << "Enter elements for the list (in Ascending Order) : ";
    for (int i = 0; i < size; i++)
    {
        cin >> data;
        list.push_back(data);
    }
    cout << "Enter element to search in the list : ";
    cin >> ele;
    pos = binary_search(list, ele);
    if (pos >= 0)
        cout << "Element " << pos << " found !";
    else
        cout << "Element does not exist in the list.";
    
    return 0;
}
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

vector<int> deno = {1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int find_Min(int n)
{
    int coins = 0, res, temp;
    while (n > 0)
    {
        for (int i = 0; i < deno.size(); ++i)
        {
            if (n <= deno[i] || n >= 1000)
            {
                n -= deno[i];
                coins++;
                break;
            }
            res = floor(n/i);
            if (res != 0)
                temp = deno[i];
            else
            {
                n -= temp;
                coins++;
                break;
            }
        }
    }
    return coins;
}

int main()
{
    int n;
    cout << "Enter any denomination : ";
    cin >> n;
    cout << "\nNumber of coins are : " << find_Min(n);
    return 0;
}
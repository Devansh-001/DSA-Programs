#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        for (int j = 2 * i; j < 2 * n; j++)
        {
            cout << ' ';
        }
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        if (i == 1)
        {
        }
        else
        {
            cout << endl;
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        for (int j = 2 * i; j < 2 * n; j++)
        {
            cout << ' ';
        }
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
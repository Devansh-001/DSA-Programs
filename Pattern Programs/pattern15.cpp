#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    int temp = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 2 * temp - 2; j > 0; j--)
        {
            cout << " ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        temp--;
        cout << endl;
    }
    temp = 0;
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        for (int j = 0; j < 2 * temp + 2; j++)
        {
            cout << " ";
        }
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        temp++;
        cout << endl;
    }
}
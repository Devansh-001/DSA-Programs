#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    int i = 0;
    for (i; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    i -= 1;
    for (i; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
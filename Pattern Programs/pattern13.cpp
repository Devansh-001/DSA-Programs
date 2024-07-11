#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    int start = 64 + n;
    for (int i = 0; i < n; i++)
    {
        for (int j = start - i; j <= start; j++)
        {
            cout << char(j);
        }
        cout << endl;
    }

// Another Solution
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << char(64 + n - j);
        }
        cout << endl;
    }
}

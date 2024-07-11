#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i + 1; j++)
        {
            if (j <= breakpoint)
            {
                cout << ch;
                ch++;
            }
            else
            {
                cout << ch;
                ch--;
                // cout << "Minus";
            }
        }
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
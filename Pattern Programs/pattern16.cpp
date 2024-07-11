#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = n; i > 0; i--)
    {
        if (i == n || i == (1))
        {
            for (int j = n; j > 0; j--)
            {
                cout << "*";
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0 || j == (n - 1))
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
    }
}
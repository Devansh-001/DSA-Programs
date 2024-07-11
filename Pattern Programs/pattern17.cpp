#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 1; i < 2 * n; i++)
    {
        for (int j = 1; j < 2 * n; j++)
        {
            int top = i - 1;
            int bottom = (2 * n - 1) - i;
            int left = j - 1;
            int right = (2 * n - 1) - j;
            cout << (n - min(min(top, bottom), min(left, right)));
        }
        cout << endl;
    }
}

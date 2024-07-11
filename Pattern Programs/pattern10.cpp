#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = n; i > 0; i--)
    {
        char current = 65;
        for (int j = 1; j <= i; j++)
        {
            cout << current << ' ';
            current++;
        }
        cout << endl;
    }
}
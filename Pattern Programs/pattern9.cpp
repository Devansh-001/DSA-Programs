#include <iostream>
using namespace std;
int main()
{
    int n = 5;

    for (int i = 0; i < n; i++)
    {
        char current = 65;
        for (int j = 0; j <= i; j++)
        {
            cout << current;
            current++;
        }
        cout << endl;
    }
}
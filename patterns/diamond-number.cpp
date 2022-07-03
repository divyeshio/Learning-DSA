#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    int spaces = 1;
    for (int i = n - 1; i > 0; i--)
    {
        for (int j = 0; j < spaces; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
        spaces++;
    }
}

//     1
//    1 2
//   1 2 3
//  1 2 3 4
// 1 2 3 4 5
//  1 2 3 4
//   1 2 3
//    1 2
//     1
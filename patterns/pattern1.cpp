#include <iostream>
using namespace std;

int main()
{
    int n = 3;
    int i = 1;
    int c = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << " " << c;
            j++;
            c++;
        }
        cout << endl;
        i++;
    }
}

/*
1 2 3
4 5 6
7 8 9
*/